//
// Created by Goutham Gopalakrishna on 26/10/19.
//
#include <cassert>
#include "Book.h"

Book::Book(){
    author = "unspecified";
    price = 999;
};

Book::Book(const Book &other_book){
    author = other_book.author;
    price = other_book.price;
}

void Book::setPublicationYear(int Year){
    assert((Year >1440) & (Year <2019));
    mPublicationYear = Year;

}

int Book::getPublicaitonYear() const {
    return mPublicationYear;
}

