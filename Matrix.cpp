#include <cstdlib>
#include <iostream>
#include <cstring>
#include "Matrix.h"
using namespace std;

    Matrix::Matrix(int r, int c) : row(r), col(c) {
    }

    Matrix::~Matrix() {
    }

    //copy constructor

    //operator =

    Matrix:: double& operator()(int i, int j) {
        return m[i * col + j];
    }

    Matrix:: double operator()(int i, int j) const {
        return m[i * col + j];
    }
    
    
    Matrix:: double operator+ (){
        //your code here
    }
    //operator +
    
    
};

/*
 * 0    0   0   0
 * 0    1.5 0   0
 * 3.2  0   0   0
 */

