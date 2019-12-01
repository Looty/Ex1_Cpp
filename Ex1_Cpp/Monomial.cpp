//
//  Monomial.cpp
//  Ex1_Cpp
//
//  Created by Kobi Lvovsky on 01/12/2019.
//  Copyright © 2019 Erez Mizrahi. All rights reserved.
//

#include "Monomial.hpp"
#include <iostream>

int Monomial::monom_count = 0;

Monomial::Monomial(int coef, unsigned int deg) {
    set_c(coef);
    set_d(deg);
    monom_count++;
}

Monomial::~Monomial() {
    monom_count--;
    std::cout << "DESTRUCTOR HAS BEEN CALLED!" <<std::endl;
}

bool Monomial::add(Monomial & monom) {
    if (get_d() != monom.get_d()) {
        std::cout << "Impossible to add different degrees" <<std::endl;
        return false;
    }
    set_c(get_c() + monom.get_c());
    return true;
}

void Monomial::set_c(int coef) {
    c = coef;
}

void Monomial::set_d(unsigned int deg) {
    d = deg;
}

int Monomial::get_c() const {
    return c;
}

unsigned int Monomial::get_d() const {
    return d;
}

int Monomial::getNumberOfMonomials() {
    return monom_count;
}

void Monomial::print() const {
    if (get_c() == 0) {
        std::cout << "0" <<std::endl;
    }
    else if (get_c() == 1) {
        if (get_d() == 1)
            std::cout << "x" <<std::endl;
        else if (get_d() == 0)
            std::cout << "1" <<std::endl;
        else
            std::cout << "x^" << get_d() <<std::endl;
    }
    else if (get_d() == 0)
        std::cout << get_c() <<std::endl;
    else
        std::cout << get_c() << "*x^" << get_d()<<std::endl;
}
