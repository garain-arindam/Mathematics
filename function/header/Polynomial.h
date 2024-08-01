// Polynomial.h
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

namespace polynomial
{
    // Polynomial class
    class Polynomial{
        // degree of the comment
        int degree;
        // linked list for storing the coefficients of the polynomial
        // order of entries: (an,an-1,...,a1,a0)
        
        public:
            Polynomial(int degree);
            double evaluatePolynomialAt(double x);
            double firstOrderDerivativeAt(double x);
            double secondOrderDerivativeAt(double x);
    };
}
#endif // POLYNOMIAL_H