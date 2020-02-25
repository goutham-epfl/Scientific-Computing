//
// Created by Goutham Gopalakrishna on 09/11/19.
//

#ifndef WORK_EBOOK_H
#define WORK_EBOOK_H
#include<string>
#include "Book.h"

class eBook: public Book{
public:
    eBook();
    std::string hiddenUrl;

};


#endif //WORK_EBOOK_H
