#ifndef QuadraticEqSolver_hpp
#define QuadraticEqSolver_hpp

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

class QuadraticEq
{
public:
    int SolutionCount;
    double * Solutions;
    
    QuadraticEq(double a, double b, double c);
    ~QuadraticEq();
};

#endif
