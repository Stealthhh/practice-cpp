#include <cmath>
#include <iostream>

using namespace std;

int main() {

    double z, x = -3, h1 = 0.5, a = -2, h2 = 0.27;
        for (x = -3; x <= 3; x += h1) {
            z = a * cos(x) - 1 / (x + 1);
            cout << "x = " << x << ", z = " << z << endl;
        }
        
        x = -2;
        
        for (a = -2; a <= 1; a += h2) {
            z = a * cos(x) - 1 / (x + 1);
            cout << "a = " << a << ", z = " << z << endl;
    }
}
