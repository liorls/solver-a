/*
AUTHORS: Levana Sciari,Mayanne zeevi, Lior Samuel-Levy 

*/

#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using namespace solver;

    double solver::solve(RealVariable& x){
        return 0.0;
    }
     std::complex<double> solver::solve(ComplexVariable& x){
         return 0.0;  
     }




 



/**All the operators of RealVariable**/
// For arguments like: number*x
RealVariable& solver::operator*(const double number,RealVariable& x)
{
    return x;
}

// For arguments like: x*number
RealVariable& solver::operator*(RealVariable& x, const double number)
{
    return x;
}

// For arguments like: x1*x2
RealVariable& solver::operator*(RealVariable& x1, RealVariable& x2)
{
    return x1;
}

// For arguments like: number/x
RealVariable& solver::operator/(const double number,RealVariable& x)
{
    return x;
}

// For arguments like: x/number
RealVariable& solver::operator/(RealVariable& x, const double number)
{
    return x;
}

// For arguments like: x1/x2
RealVariable& solver::operator/(RealVariable& x1, RealVariable& x2)
{
    return x1;
}

// For arguments like: number+x
RealVariable& solver::operator+(const double number,RealVariable& x)
{
    return x;
}

// For arguments like: x+number
RealVariable& solver::operator+(RealVariable& x, const double number)
{
    return x;
}

// For arguments like: x1+x2
RealVariable& solver::operator+(RealVariable& x1, RealVariable& x2)
{
    return x1;
}

// For arguments like: number-x
RealVariable& solver::operator-(const double number,RealVariable& x)
{
    return x;
}

// For arguments like: x-number
RealVariable& solver::operator-(RealVariable& x, const double number)
{
    return x;
}

// For arguments like: x1-x2
RealVariable& solver::operator-(RealVariable& x1, RealVariable& x2)
{
    return x1;
}

// For arguments like: number==x
RealVariable& solver::operator==(const double number,RealVariable& x)
{
    return x;
}

//For arguments like: x==number
RealVariable& solver::operator==(RealVariable& x, const double number)
{
    return x;
}

// For arguments like: x1==x2
RealVariable& solver::operator==(RealVariable& x1, RealVariable& x2)
{
    return x1;
}

// For arguments like: x^number
RealVariable& solver::operator^(RealVariable& x, const double number)
{
    return x;
}

/**All the operators of ComplexVariable**/
// For arguments like: number*y
ComplexVariable& solver::operator*(const double number,ComplexVariable& y)
{
    return y;
}

// For arguments like: y*number
ComplexVariable& solver::operator*(ComplexVariable& y, const double number)
{
    return y;
}

// For arguments like: y1*y2
ComplexVariable& solver::operator*(ComplexVariable& y1, ComplexVariable& y2)
{
    return y1;
}

// // For arguments like: doubleComplex*y
// ComplexVariable& solver::operator*(complex<double> number,ComplexVariable& y)
// {
//     return y;
// }

// // For arguments like: y*doubleComplex
// ComplexVariable& solver::operator*(ComplexVariable& y ,complex<double> number)
// {
//     return y;
// }


// For arguments like: number/y
ComplexVariable& solver::operator/(const double number,ComplexVariable& y)
{
    return y;
}

// For arguments like: y/number
ComplexVariable& solver::operator/(ComplexVariable& y, const double number)
{
    return y;
}

// For arguments like: y1/y2
ComplexVariable& solver::operator/(ComplexVariable& y1, ComplexVariable& y2)
{
    return y1;
}

// // For arguments like: doubleComplex/y
// ComplexVariable& solver::operator/(complex<double> number,ComplexVariable& y)
// {
//     return y;
// }

// // For arguments like: y/doubleComplex
// ComplexVariable& solver::operator/(ComplexVariable& y ,complex<double> number)
// {
//     return y;
// }

// For arguments like: number+y
ComplexVariable& solver::operator+(const double number,ComplexVariable& y)
{
    return y;
}

// For arguments like: y+number
ComplexVariable& solver::operator+(ComplexVariable& y, const double number)
{
    return y;
}

// For arguments like: y1+y2
ComplexVariable& solver::operator+(ComplexVariable& y1, ComplexVariable& y2)
{
    return y1;
}

// For arguments like: doubleComplex+y
ComplexVariable& solver::operator+(complex<double> number,ComplexVariable& y)
{
    return y;
}

// For arguments like: y+doubleComplex
ComplexVariable& solver::operator+(ComplexVariable& y ,complex<double> number)
{
    return y;
}

// For arguments like: number-y
ComplexVariable& solver::operator-(const double number,ComplexVariable& y)
{
    return y;
}

// For arguments like: y-number
ComplexVariable& solver::operator-(ComplexVariable& y, const double number)
{
    return y;
}

// For arguments like: y1-y2
ComplexVariable& solver::operator-(ComplexVariable& y1, ComplexVariable& y2)
{
    return y1;
}

// // For arguments like: doubleComplex-y
// ComplexVariable& solver::operator-(complex<double> number,ComplexVariable& y)
// {
//     return y;
// }

// // For arguments like:  y-doubleComplex
// ComplexVariable& solver::operator-(ComplexVariable& y ,complex<double> number)
// {
//     return y;
// }

// For arguments like: number==y
ComplexVariable& solver::operator==(const double number,ComplexVariable& y)
{
    return y;
}

// For arguments like: y==number
ComplexVariable& solver::operator==(ComplexVariable& y, const double number)
{
    return y;
}

// For arguments like: y1==y2
ComplexVariable& solver::operator==(ComplexVariable& y1, ComplexVariable& y2)
{
    return y1;
}

// // For arguments like:doubleComplex==y
// ComplexVariable& solver::operator==(complex<double> number,ComplexVariable& y)
// {
//     return y;
// }

// // For arguments like: y==doubleComplex
// ComplexVariable& solver::operator==(ComplexVariable& y ,complex<double> number)
// {
//     return y;
// }

// For arguments like: x^number
ComplexVariable& solver::operator^(ComplexVariable& y, const double number)
{
    return y;
}