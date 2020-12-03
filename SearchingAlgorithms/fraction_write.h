//
// Created by Teofana Moisi on 20/06/2020.
//

#ifndef SEARCHINGALGORITHMS_FRACTION_WRITE_H
#define SEARCHINGALGORITHMS_FRACTION_WRITE_H

#include "fraction.h"

class fraction_write: public fraction {
public:
    fraction_write() {}
    fraction_write(int nominator = 0, int denominator = 1);
    fraction product(fraction& f1);
    ~fraction_write() {}

};


#endif //SEARCHINGALGORITHMS_FRACTION_WRITE_H
