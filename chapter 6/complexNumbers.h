//
// Created by gopalakr@INTRANET.EPFL.CH on 28.10.19.
//

#ifndef WORK_COMPLEXNUMBERS_H
#define WORK_COMPLEXNUMBERS_H

class complexNumbers{
public:
    double realPart;
    double imPart;
    complexNumbers();
    complexNumbers(double x, double y);
    complexNumbers(double x);
    complexNumbers(const complexNumbers &c);
    double calculateModulus() const;
    double calculateArgument() const;
    complexNumbers calculatePower(double n) const;
    complexNumbers& operator=(const complexNumbers& z);
    complexNumbers operator+(const complexNumbers& z) const;
    complexNumbers operator-() const;
    complexNumbers operator-(const complexNumbers& z) const;
    friend std::ostream& operator<<(std::ostream& output,
                                    const complexNumbers& z);

    //exercises
    double getRealPart() const;
    double getImPart() const;

    friend double realPartFriend(complexNumbers& z);
    friend double imPartFriend(complexNumbers& z);

    complexNumbers complex_conjugate();
    void set_conjugate();
    static void allocate(double **&M, int n_rows, int n_cols);
    void deallocate(double **&M, int n_rows, int n_cols);

};


#endif //WORK_COMPLEXNUMBERS_H
