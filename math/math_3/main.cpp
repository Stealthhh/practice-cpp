#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double e, a = 5.3, y = 1.1;
    for (double x = -3; x <= 3; x += 0.5)
        {
            if (pow(x, 2) + pow(y, 2) <= pow(a, 2)) y = sqrt(x / sqrt(x / 15 * pow(x, 2)));
            else y = pow(x, 2) + pow(e, x);
            cout << "x = "<< setw(3)<< x <<" y = " << setw(3) << y << " e = " << setw(3) << e << endl;
        }
     return 0;
}
