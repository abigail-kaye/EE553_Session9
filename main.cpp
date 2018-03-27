#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

class Matrix {
private:
    int row, col;
    double *m;
public:

    Matrix(int r, int c) : row(r), col(c) {
    }

    ~Matrix() {
    }

    //copy constructor

    //operator =

    //operator (

    double& operator()(int i, int j) {
        return m[i * col + j];
    }

    double operator()(int i, int j) const {
        return m[i * col + j];
    }
};

/*
 * 0    0   0   0
 * 0    1.5 0   0
 * 3.2  0   0   0
 */


int main(int argc, char** argv) {
    //double array
    Matrix a(3, 4);
    a(1, 1) = 1.5;
    a(2, 1) = 3.2;
    cout << a(1, 2) << '\n';
    cout << a;
    Matrix b(3,4,1.5); //set all values to 1.5
    Matrix c = a+b;
    Matrix d(4,3,2.5);
    Matrix e = b * d; //matrix multiplication
    return 0;
}

