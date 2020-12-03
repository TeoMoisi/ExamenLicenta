//
// Created by Teofana Moisi on 20/06/2020.
//

#include "fraction.h"

fraction::fraction(int nominator, int denominator) {
    this->nominator = nominator;
    this->denominator = denominator;
}

fraction fraction::product(fraction &f1) {
    return fraction(this->nominator * f1.nominator, this->denominator * f1.denominator);
}

fraction& fraction::multiply(fraction &f1) {
    *this = this->product(f1);
    return *this;
}

void fraction::display() {
    if ( denominator )
        std::cout << nominator << " / " << denominator;
    else
        std::cout << "Incorrect fraction";
}