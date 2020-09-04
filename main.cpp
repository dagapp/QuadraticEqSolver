#include <iostream>
#include "QuadraticEqSolver.hpp"

using namespace std;

int main()
{
    QuadraticEq equation(0, 0, -9);
    
    cout << "Solution count: " << equation.SolutionCount << endl;
    for (int i = 0; i < equation.SolutionCount; i++)
    {
        cout << "Solution " << i + 1 << ": " << equation.Solutions[i] << endl;
    }
    
    return 0;
}
