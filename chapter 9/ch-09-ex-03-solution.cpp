

#include <cstdlib>
#include <fstream>
#include <iostream>

#include "AbstractOdeSolver.hpp"
#include "ForwardEulerSolver.hpp"


double fRhs(double y, double t) { return -100.0 * y; }

void trySolve(AbstractOdeSolver *solver, std::ofstream &file,
              std::string fileName) {
  file.open(fileName.c_str());
  if (file.is_open()) {
    try {
      solver->SolveEquation(file);
      file.close();
    } catch (Exception &e) {
      e.PrintDebug();
      std::cout << "Reducing step size.\n";
      file.close();
      double h = solver->GetStepSize() / 2.0;
      solver->SetStepSize(h);
      trySolve(solver, file, fileName);
    }
  } else {
    std::cout << "Couldn't open solution_euler.dat. Aborting." << std::endl;
    return;
  }
}

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << "Missing paremeter. Please run as:\n"
              << "  ./ch-07-ex-03-solution <stepsize_euler> <stepsize_rk>\n"
              << "Aborting.\n";
    return 1;
  }

  double initialTime = 0.0;
  double finalTime = 100.0;
  double initialValue = 0.8;

  AbstractOdeSolver *pSolver = 0;

  // Solving with forward-Euler
  double stepSizeEuler = std::atof(argv[1]);
  pSolver = new ForwardEulerSolver;
  pSolver->SetInitialValue(initialValue);
  pSolver->SetTimeInterval(initialTime, finalTime);
  pSolver->SetStepSize(stepSizeEuler);
  pSolver->SetRightHandSide(fRhs);

  std::cout << "Solving with forward Euler method" << std::endl;
  std::ofstream eulerSolutionFile;
  trySolve(pSolver, eulerSolutionFile, "solution_euler.dat");
  delete pSolver;
  std::cout << "Solution complete." << std::endl;

  

  return 0;
}
