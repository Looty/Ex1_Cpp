//
//  main.cpp
//  Ex1_Cpp
//
//  Created by Erez Mizrahi on 01/04/19.
//  Copyright © 2019 Erez Mizrahi. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Monomial.h"
#include "Polynomial.h"

using namespace std;

Monomial one;

void testMonomial() {
    // Prints 1 for the global object
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;

    static Monomial two(2);
    Monomial x(1,1);
    Monomial xsquare(1,2);
    
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;
    Monomial* m32=new Monomial(3,2);
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;
    
    Monomial* m43=new Monomial(4,3);
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;
    
    Monomial* m52=new Monomial(5,2);
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;
    
    one.print(); cout << endl;
    two.print(); cout << endl;
    x.print(); cout << endl;
    xsquare.print(); cout << endl;
    m32->print(); cout << endl;
    m43->print(); cout << endl;
    m52->print(); cout << endl;
    delete m43;
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;
    
    // Impossible to add different degrees
    cout << "Adding xsquare to x:" << x.add(xsquare) << endl;
    x.print(); cout << endl;
    xsquare.print(); cout << endl;
    cout << "Adding m32 to xsquare:" << xsquare.add(*m32) << endl;
    xsquare.print(); cout << endl;
    m32->print(); cout << endl;
    
    // An intentional memory leak of two dynamic allocations
}

void testPolynomial() {
    Polynomial p;

    p.print(); cout << endl;
    p.add(one);
    p.print(); cout << endl;
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl; // prints 5

    p.add(Monomial(1,2));
    p.print(); cout << endl;
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl; // prints 6
    
    p.add(Monomial(-1,2));
    p.print(); cout << endl;
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl; // prints 5
}

int main() {
    cout << boolalpha;
    testMonomial();
    // This prints 4: 1 global + 1 local static + 2 memory leaked
    cout << "Number of Monomials=" << Monomial::getNumberOfMonomials() << endl;
    
    testPolynomial();
    return 0;
}
