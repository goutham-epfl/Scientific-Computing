//
// Created by Goutham Gopalakrishna on 10/11/19.
//

#ifndef WORK_GUEST_H
#define WORK_GUEST_H

#include <string>

class guest{
public:
    int numberOfNights;
    double ratePerNight, telephoneBill;
    std::string guestName, roomType, arrivalDate;
    virtual double calculateBill();

};
#endif //WORK_GUEST_H
