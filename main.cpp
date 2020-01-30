#include <iostream>
#include "mymatrix.h"
using namespace std;

int main()
{
    mymatrix<int> M; //4x4 matrix
    
    M(0, 0) = 123;
    M(1, 1) = 456;
    M(2, 2) = 789;
    M(3, 3) = -99;

    /*
    for (int r = 0; r < M.numrows(); ++r)
    {
        for (int c = 0; c < M.numcols(r); ++c) {
            cout << M(r, c) << " ";
        }

        cout << endl;
    }
    */
    
    M.growcols(1, 8); // grow row 1 to have 8 columns 
    
    M._output();
    
    return 0;
}
