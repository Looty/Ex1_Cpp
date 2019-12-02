//
//  Polynomial.cpp
//  Ex1_Cpp
//
//  Created by Erez Mizrahi on 01/04/19.
//  Copyright © 2019 Erez Mizrahi. All rights reserved.
//

#include "Polynomial.hpp"
#include "Monomial.hpp"
#include <iostream>

Polynomial::Polynomial() {
    setMonomials(0);
}

Polynomial::~Polynomial() {
    
}

void Polynomial::print() const {
    std::cout << getMonomials();
}

int Polynomial::getMonomials() const {
    return monomials;
}

void Polynomial::setMonomials(int m) {
    monomials = m;
}

void Polynomial::add(Monomial m) {
    setMonomials(getMonomials()+1);
}

void Polynomial::add(Monomial & m) {
    setMonomials(getMonomials()+1);
}
