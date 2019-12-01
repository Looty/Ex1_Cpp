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

Monomial::~Monomial(){
    std::cout << "This is a destructor!" <<std::endl;
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

int Monomial::get_count() const {
    return monom_count;
}

void Monomial::print_data() const {
    
}
