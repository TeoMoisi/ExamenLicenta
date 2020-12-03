//
// Created by Teofana Moisi on 20/06/2020.
//

#ifndef SEARCHINGALGORITHMS_FRACTION_H
#define SEARCHINGALGORITHMS_FRACTION_H

#include <iostream>

class fraction {
protected:
    int nominator;
    int denominator;

public:
    fraction(int nominator = 0, int denominator = 1);
    ~fraction() {}
    virtual fraction product(fraction& f1);
    fraction& multiply(fraction& f1);
    void display();
};

#endif //SEARCHINGALGORITHMS_FRACTION_H
