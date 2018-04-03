/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.h
 * Author: Class2018
 *
 * Created on April 2, 2018, 6:54 PM
 */

#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;

class Matrix{
private:
    double *m, val;
    int rows, cols;
public:
    Matrix(int r, int c, double v);
    ~Matrix();
    Matrix(const Matrix& orig);
    double& operator()(int i, int j);
    double operator()(int i, int j) const;
    Matrix operator + (const Matrix& m);
    Matrix operator = (const Matrix& m);
Matrix operator * (const Matrix& m);


#endif /* MATRIX_H */

