#include <iostream>
#include "mymatrix.h"
using namespace std;

int main()
{
    // calling default constructor
    mymatrix<int> M; //4x4 matrix 
    M._output();
    cout << endl;
    
    // changing elements of the matrix 
    M(0, 0) = 1;
    M(0, 1) = 2;
    M(0, 2) = 3;
    M(0, 3) = 4;
    M._output();
    cout << endl;
    
    // testing size function
    int M_size = M.size();
    cout << "M size: " << M_size << endl << endl;
    
    // calling copy constructor
    mymatrix<int> M2(M); // should be copy of matrix M
    M2._output();
    cout << endl;
    
    //calling parametrized constructor
    mymatrix<int> M3(3, 7);
    M3._output();
    cout << endl;
    
    // grow row 1 to have 8 columns 
    M.growcols(1, 8); 
    M._output();
    cout << endl;
    
    // testing size function
    M_size = M.size();
    cout << "M size: " << M_size << endl << endl;
    
    // calling copy cnstructor
    mymatrix<int> M4(M); // should be copy of matrix M
    M4._output();
    cout << endl;
    
    // calling grow()
    M3.grow(10, 5);
    M3._output();
    cout << endl;
    
    
    return 0;
}
