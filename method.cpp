/*
solve the given system of linear equations using the Jacobi and Gauss Methoud:

4x1 +2x2 - 2x3=0
x1 -3x2 -x3 = 7 
3x1 -x2 +4x3 =5 

  */

#include <iostream>
#include <cmath>
using namespace std;

void jacobiMethod(double x1, double x2, double x3, int iterations) {
    double x1_new, x2_new, x3_new;
    
    for (int k = 0; k < iterations; k++) {
        x1_new = (-2 * x2 + 2 * x3) / 4;
        x2_new = (x1 + x3 - 7) / 3;
        x3_new = (-3 * x1 + x2 + 5) / 4;
        
        cout << "Iteration " << k+1 << ": x1 = " << x1_new << ", x2 = " << x2_new << ", x3 = " << x3_new << endl;
        
        x1 = x1_new;
        x2 = x2_new;
        x3 = x3_new;
    }
}

void gaussSeidelMethod(double x1, double x2, double x3, int iterations) {
    for (int k = 0; k < iterations; k++) {
        x1 = (-2 * x2 + 2 * x3) / 4;
        x2 = (x1 + x3 - 7) / 3;
        x3 = (-3 * x1 + x2 + 5) / 4;
        
        cout << "Iteration " << k+1 << ": x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
    }
}

int main() {
    double x1 = 0, x2 = 0, x3 = 0;
    int iterations = 3;

    cout << "Jacobi Method:\n";
    jacobiMethod(x1, x2, x3, iterations);

    x1 = 0;
    x2 = 0;
    x3 = 0;
    
    cout << "\nGauss-Seidel Method:\n";
    gaussSeidelMethod(x1, x2, x3, iterations);

    return 0;
}
