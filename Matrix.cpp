#include <cstdlib>
#include <iostream>
#include <cstring>
#include "Matrix.h"
using namespace std;

Matrix::Matrix(int r, int c, double value = 0.0) : rows(r), cols(c), val(value) {
    for (int i = 0; i < cols * rows; i++) {
        m[i] = value;
    }
}

Matrix::~Matrix() {
    delete [] m;
}

//copy constructor
Matrix::Matrix(const Matrix& orig) {
    for (int i = 0; i < rows * cols; i++) {
        m[i] = orig.m[i];
    }
}

//operator =
Matrix& Matrix::operator =(const Matrix& orig){
    if (this != &orig){
        delete[] m;
        rows = orig.rows;
        cols = orig.cols;
        m = new double[rows*cols];
        for (int i = 0; i<rows*cols; i++){
            m[i] = orig.m[i];
        }
    }
}

//a(1,2) = 1.5

double& Matrix::operator()(int i, int j) {
    return m[i * cols + j];
}

//cout << a(1,2)

double Matrix::operator()(int i, int j) const {
    return m[i * cols + j];
}

double Matrix::operator+(Matrix l, Matrix r) {
   
}

//MOVE constuctor

Matrix(Matrix&& orig) {
    for (int i = 0; i < rows * cols; i++) {
        m[i] = orig.m[i];
    }
    orig = NULL;
    rows = orig.rows;
    cols = orig.cols;
}

/*
 * 0    0   0   0
 * 0    1.5 0   0
 * 3.2  0   0   0
 */

