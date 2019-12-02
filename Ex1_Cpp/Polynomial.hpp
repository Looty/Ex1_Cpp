//
//  Polynomial.hpp
//  Ex1_Cpp
//
//  Created by Erez Mizrahi on 01/04/19.
//  Copyright © 2019 Erez Mizrahi. All rights reserved.
//

#pragma once
#include "Monomial.hpp"

class Polynomial {
    public:
        Polynomial();
        ~Polynomial();
        void print() const;
        int getMonomials() const;
        coid setMonomials(int);
        void add(Monomial &);
        void add(Monomial);
    
    private:
        int monomials;
};
