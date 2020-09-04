//
//Example main code
//

#include <iostream>
#include "QuadraticEqSolver.hpp"

using namespace std;

int main()
{
    //Creating an equation object
    QuadraticEq equation(4, 7, 3);
    
    //equation.SolutionCount contains a number of solutions equation has
    cout << "Solution count: " << equation.SolutionCount << endl;
    for (int i = 0; i < equation.SolutionCount; i++)
    {
        //equation.Solutions is an array of solutions (NULL, 1 element or 2 elements)
        cout << "Solution " << i + 1 << ": " << equation.Solutions[i] << endl;
    }
    
    return 0;
}
