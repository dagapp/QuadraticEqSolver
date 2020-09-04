#include "QuadraticEqSolver.hpp"

QuadraticEq::QuadraticEq(double a, double b, double c)
{
    SolutionCount = 0;
    Solutions = NULL;
    
    if (a == 0)
    {
        if (b != 0)
        {
            Solutions = new double[1];
            
            Solutions[0] = -c / b;
            SolutionCount = 1;
        }
    }
    else
    {
        double d = b * b - 4 * a * c;
        if (d > 0)
        {
            Solutions = new double[2];
            
            Solutions[0] = (-b + sqrt(d)) / (2 * a);
            Solutions[1] = (-b - sqrt(d)) / (2 * a);
            SolutionCount = 2;
        }
        else if(d == 0)
        {
            Solutions = new double[1];
            
            Solutions[0] = (-b + sqrt(d)) / (2 * a);
            SolutionCount = 1;
        }
    }
}

QuadraticEq::~QuadraticEq()
{
    delete [] Solutions;
}
