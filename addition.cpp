#include <iostream>
#include<fstream>
using namespace std;

class Matrix {
private:
    double m[3][4];
    int rows, cols;
public:
    Matrix(int r, int c){
        rows = r; cols = c;
        for (int i = 0; i<rows;i++){
            for (int j = 0; j<cols;j++){
                m[i][j]=0;
            }
        }
    }
    void setValue(int r, int c, double value = 0){
        m[r][c]=value;
    }
    double getValue(int r, int c){
        return m[r][c];
    }
    Matrix operator + (Matrix t) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                m[i][j] += t.getValue(i, j);
            }
        }
        return t;
    }
    /*
    //MOVE constructior
    Matrix(Matrix && orig){
        data = orig.data;
        orig.data = nullptr;
        rows = orig.rows;
        cols = orig.cols;
    }
     */
};

int main() {
    Matrix a(3,4);  // single block of memory 3 * 4 set all to 0.0
   // a(1,1) = 1.5;
    a.setValue(1,1,1.5);
    //a(2,1) = 3.2;
    a.setValue(2,1,3.2);
    /**
     0.0  0.0  0.0  0.0
     0.0  1.5  0.0  0.0
     0.0  3.2  0.0  0.0
 */
    //cout << a(1,2) << '\n';
    //cout << a;
    Matrix b(3, 4); // set all values to 1.5
    b.setValue(3,4,1.5);
    //cout << b;
    Matrix c = a + b;
    //Matrix d(4,3,2.5);
    //Matrix e = b * d; // matrix  mult.
    cout << c;
}