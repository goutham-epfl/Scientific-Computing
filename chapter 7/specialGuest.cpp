//
// Created by Goutham Gopalakrishna on 10/11/19.
//

#include "specialGuest.h"

double specialGuest::calculateBill() {
    return 45 + (numberOfNights-1) * 40;
}