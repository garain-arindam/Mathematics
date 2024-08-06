#include <vector>

#include "Polynomial.h"

namespace polynomial {
    
    Polynomial::Polynomial(int degree): degree(degree), coefficients(degree+1,0.0){}
    Polynomial::Polynomial(int degree, std::vector<double>coeff)
    : degree(degree), coefficients(coeff){}

    
    double Polynomial::evaluatePolynomialAt(double x) const{
        // Evaluating the polynomial by Horn's rule; Time complexity: O(n)
        double val = (this->coefficients).back(); 
        auto iter = (this->coefficients).rbegin();
        while( iter != (this->coefficients).rend() ){
            iter++; 
            val = val * x +  (*iter);
        }
    }
}
