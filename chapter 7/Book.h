//
// Created by Goutham Gopalakrishna on 26/10/19.
//

#ifndef WORK_BOOK_H
#define WORK_BOOK_H

#include <string>

class Book{
    public:
        Book();
        Book(const Book &other_book);
        std::string author, title, publisher, format;
        int price;
        void setPublicationYear(int Year);
        int getPublicaitonYear() const;
    private:
        int mPublicationYear;

};

#endif //WORK_BOOK_H
