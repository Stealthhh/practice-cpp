#include <cmath>
#include <iostream>

using namespace std;

int main() {
    
    double Z, S, m = 0.7, x = 1.77, a = 0.5, b = 1.08;
    Z = (sin(x))/(sqrt(1 + pow(m, 3) * pow(sin(x), 2))) - m * x * log(m * x);
    S = exp(-a * x) * sqrt(x + 1) + exp(-b * x) * sqrt(abs(x - 3));
    
    cout << "Z = " << Z << endl;
    cout << "S = " << S << endl;

}
