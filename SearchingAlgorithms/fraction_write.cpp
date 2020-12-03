//
// Created by Teofana Moisi on 20/06/2020.
//

#include "fraction_write.h"

fraction_write::fraction_write(int nominator, int denominator) : fraction(nominator, denominator)
{
}

fraction fraction_write::product(fraction& q) {
    fraction r = fraction(*this).product(q);
    std::cout << "(";
    this->display();
    std::cout << ") * (";
    q.display();
    std::cout << ") = ";
    r.display();
    std::cout << "\n";
    return r;
}