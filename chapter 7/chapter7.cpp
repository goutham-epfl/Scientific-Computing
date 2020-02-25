//
// Created by Goutham Gopalakrishna on 09/11/19.
//
#include <iostream>
#include "eBook.cpp"
#include "Book.cpp"
#include "guest.cpp"
#include "specialGuest.cpp"

int main(int argc, char* argv[]){
    eBook holiday_reading;
    holiday_reading.title = "Animal spirits";
    holiday_reading.author = "Shiller";
    std::cout <<"The author is:" << holiday_reading.author << std::endl;
    holiday_reading.setPublicationYear(1988);
    std::cout << "The format is:" << holiday_reading.format << std::endl;
    holiday_reading.hiddenUrl = "http://ebook.example.com/example-book";
    std::cout <<"The url is:" << holiday_reading.hiddenUrl << std::endl;

    eBook *p1 = new eBook;
    Book *p2 = new Book;
    guest *p3 = new guest;

    p1->format = "electronic";
    p2->format = "physical";
    std::cout << (*p1).format << std::endl;

    p3->numberOfNights = 2.0;
    p3->ratePerNight = 30.0;
    std::cout << (*p3).calculateBill() << std::endl;
    delete p1;
    delete p2;
    delete p3;
}
