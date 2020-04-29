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


    RealVariable& solver::operator+(const double y, RealVariable& x){
        return x;
    }
    RealVariable& solver::operator+(RealVariable& x, const double y){
        return x;
    }
    RealVariable& solver::operator+(RealVariable& y, RealVariable& x){
        return x;
    }

    RealVariable& solver::operator-(const double y, RealVariable& x){
        return x;
    }
    RealVariable& solver::operator-(RealVariable& x, const double y){
        return x;
    }
    RealVariable& solver::operator-(RealVariable& y, RealVariable& x){
        return x;
    }

    RealVariable& solver::operator*(const double y, RealVariable& x){
        return x;
    }
    RealVariable& solver::operator*(RealVariable& x, const double y){
        return x;
    }
    RealVariable& solver::operator*(RealVariable& y, RealVariable& x){
        return x;
    }

    RealVariable& solver::operator/(const double y, RealVariable& x){
        return x;
    }
    RealVariable& solver::operator/(RealVariable& x, const double y){
        return x;
    }
    RealVariable& solver::operator/(RealVariable& y, RealVariable& x){
        return x;
    }

    RealVariable& solver::operator==(const double y, RealVariable& x){
        return x;
    }
    RealVariable& solver::operator==(RealVariable& x, const double y){
        return x;
    }
    RealVariable& solver::operator==(RealVariable& y, RealVariable& x){
        return x;
    }

    RealVariable& solver::operator^(RealVariable& x, const double y){
        return x;
    }


ComplexVariable& solver::operator+(const double y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator+(ComplexVariable& x, const double y){
      return x;
  }
ComplexVariable& solver::operator+(ComplexVariable& y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator+(complex<double> num,ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator+(ComplexVariable& x ,complex<double> num){
      return x;
  }

 ComplexVariable& solver::operator-(const double y, ComplexVariable& x){
      return x;
  }
 ComplexVariable& solver::operator-(ComplexVariable& x, const double y){
      return x;
  }
 ComplexVariable& solver::operator-(ComplexVariable& y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator-(complex<double> num,ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator-(ComplexVariable& x ,complex<double> num){
      return x;
  }

 ComplexVariable& solver::operator*(const double y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator*(ComplexVariable& x, const double y){
      return x;
  }
ComplexVariable& solver::operator*(ComplexVariable& y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator*(complex<double> num,ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator*(ComplexVariable& x ,complex<double> num){
      return x;
  }

ComplexVariable& solver::operator/(const double y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator/(ComplexVariable& x, const double y){
      return x;
  }
ComplexVariable& solver::operator/(ComplexVariable& y, ComplexVariable& x){
      return x;
  }
 ComplexVariable& solver::operator/(complex<double> num,ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator/(ComplexVariable& x ,complex<double> num){
      return x;
  }

ComplexVariable& solver::operator==(const double y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator==(ComplexVariable& x, const double y){
      return x;
  }
ComplexVariable& solver::operator==(ComplexVariable& y, ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator==(complex<double> num,ComplexVariable& x){
      return x;
  }
ComplexVariable& solver::operator==(ComplexVariable& x ,complex<double> num){
      return x;
  }

 ComplexVariable& solver::operator^(ComplexVariable& x, const double y){
      return x;
  }