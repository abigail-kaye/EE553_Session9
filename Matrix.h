//
// Created by LN on 3/26/2018.
//

#ifndef EE553_SESSION9_MATRIX_H
#define EE553_SESSION9_MATRIX_H
#include <iostream>
using namespace std;

class Matrix{
private:
    double *m, val;
    int rows, cols;
public:
    Matrix(int r, int c, double v);

    ~Matrix();

    double& operator()(int i, int j);
    double operator()(int i, int j) const;
    Matrix operator + (const Matrix& m);
    Matrix operator = (const Matrix& m);
    Matrix operator * (const Matrix& m);




};

#endif //EE553_SESSION9_MATRIX_H
