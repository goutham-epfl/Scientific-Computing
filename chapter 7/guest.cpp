//
// Created by Goutham Gopalakrishna on 10/11/19.
//

#include "guest.h"
double guest::calculateBill() {
    return telephoneBill + numberOfNights*ratePerNight;
}