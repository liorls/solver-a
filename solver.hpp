#include <iostream>
#include <complex>

using namespace std;

namespace solver{

    class RealVariable{
        public:
        double number;

        RealVariable(): number(0){} // defult
        RealVariable(double number): number(number){} //parameter

    friend RealVariable& operator+(const double y, RealVariable& x);
    friend RealVariable& operator+(RealVariable& x, const double y);
    friend RealVariable& operator+(RealVariable& y, RealVariable& x);

    friend RealVariable& operator-(const double y, RealVariable& x);
    friend RealVariable& operator-(RealVariable& x, const double y);
    friend RealVariable& operator-(RealVariable& y, RealVariable& x);

    friend RealVariable& operator*(const double y, RealVariable& x);
    friend RealVariable& operator*(RealVariable& x, const double y);
    friend RealVariable& operator*(RealVariable& y, RealVariable& x);

    friend RealVariable& operator/(const double y, RealVariable& x);
    friend RealVariable& operator/(RealVariable& x, const double y);
    friend RealVariable& operator/(RealVariable& y, RealVariable& x);

    friend RealVariable& operator==(const double y, RealVariable& x);
    friend RealVariable& operator==(RealVariable& x, const double y);
    friend RealVariable& operator==(RealVariable& y, RealVariable& x);

    friend RealVariable& operator^(RealVariable& x, const double y);
};

   class ComplexVariable{
        public:
        complex<double> re;
        complex<double> im;

    // Constructor. Also works as a conversion from double and
    // also as a default ctor.
      ComplexVariable (const double& re= 0.0,
             const double& im= 0.0)
        : re(re), im(im) {}

    friend ComplexVariable& operator+(const double y, ComplexVariable& x);
    friend ComplexVariable& operator+(ComplexVariable& x, const double y);
    friend ComplexVariable& operator+(ComplexVariable& y, ComplexVariable& x);

    friend ComplexVariable& operator-(const double y, ComplexVariable& x);
    friend ComplexVariable& operator-(ComplexVariable& x, const double y);
    friend ComplexVariable& operator-(ComplexVariable& y, ComplexVariable& x);

    friend ComplexVariable& operator*(const double y, ComplexVariable& x);
    friend ComplexVariable& operator*(ComplexVariable& x, const double y);
    friend ComplexVariable& operator*(ComplexVariable& y, ComplexVariable& x);

    friend ComplexVariable& operator/(const double y, ComplexVariable& x);
    friend ComplexVariable& operator/(ComplexVariable& x, const double y);
    friend ComplexVariable& operator/(ComplexVariable& y, ComplexVariable& x);

    friend ComplexVariable& operator==(const double y, ComplexVariable& x);
    friend ComplexVariable& operator==(ComplexVariable& x, const double y);
    friend ComplexVariable& operator==(ComplexVariable& y, ComplexVariable& x);

    friend ComplexVariable& operator^(ComplexVariable& x, const double y);
};



    double solve(RealVariable& x);
    std::complex<double> solve(ComplexVariable& x);


}// end namespace solver