// Polynomial.h
#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector> 
/**
 * @file Polynomial.h
 * @brief Declars class Polynomial to be used to polnomial arithmetic and calculus
 */

namespace polynomial
{
    /**
     * @class Polynomial
     * @brief Represents a polynomial with real coefficients.
     */
    class Polynomial{
        // degree of the comment
        int degree;
        // linked list for storing the coefficients of the polynomial
        // order of entries: (an,an-1,...,a1,a0)
        std::vector<double> poly;
        
        public:
            
            /**
            * @brief Constructs a Polynomial of a given degree with all coefficients initialized to 0.
            * @param degree Degree of the polynomial.
            */
            Polynomial(int degree);
            /**
            * @brief Constructs a Polynomial with the given degree and coefficients.
            * @param degree Degree of the polynomial.
            * @param coefficients Vector of coefficients.
            */
            Polynomial (int degree, const std::vector<double> coefficient);

            /**
            * @brief Evaluates the polynomial at a given value of x.
            * @param x The value at which to evaluate the polynomial.
            * @return The value of the polynomial at x.
            */
            double evaluatePolynomialAt(double x) const;
            
            /**
            * @brief Evaluates the first order derivative of the polynomial at a given value of x.
            * @param x The value at which to evaluate the first derivative.
            * @return The value of the first derivative at x.
            */
            double firstOrderDerivativeAt(double x) const ;

            /**
             * @brief Evaluates the second order derivative of the polynomial at a given value of x.
             * @param x The value at which to evaluate the second derivative.
             * @return The value of the second derivative at x.
             */
            double secondOrderDerivativeAt(double x) const;

            // overloading basic operators 
            
            /**
             * @brief Assignment operator for Polynomial.
             * @param other The polynomial to assign from.
             * @return A reference to this polynomial.
             */
            Polynomial& operator=(const Polynomial& poly);



           /**
            * @brief Destructor 
            */
            ~Polynomial();
    };
}
#endif // POLYNOMIAL_H