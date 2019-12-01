//
//  Monomial.hpp
//  Ex1_Cpp
//
//  Created by Kobi Lvovsky on 01/12/2019.
//  Copyright © 2019 Erez Mizrahi. All rights reserved.
//
#pragma once

class Monomial {
    friend class Polynomial;
public:
    Monomial(int=1, unsigned int=0);
    ~Monomial();
    bool add(Monomial &);
    void set_c(int=1);
    void set_d(unsigned int=0);
    int get_c() const;
    unsigned int get_d() const;
    int getNumberOfMonomials() const;
    void print() const;

private:
    int c;
    unsigned int d;
    static int monom_count;
};
