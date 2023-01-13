#include <iostream>
#include <algorithm>

using namespace std;

const int N = 5;

int main()
{
    int a[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = i + j;
        }
    }

    int max_odd_count = 0;
    int max_odd_count_row = -1;

    for (int i = 0; i < N; i++) {
        int odd_count = 0;
        for (int j = 0; j < N; j++) {
            if (a[i][j] % 2 == 1) {
                odd_count++;
            }
        }
        if (odd_count > max_odd_count) {
            max_odd_count = odd_count;
            max_odd_count_row = i;
        }
    }

    // Если нашли строку с нечетными элементами, то выводим ее номер
    if (max_odd_count_row != -1) {
        cout << "Номер строки с наибольшим количеством нечетных элементов: " << max_odd_count_row << endl;
    } else {
        // Иначе меняем элементы первой строки на элементы последней строки
        for (int i = 0; i < N; i++) {
            swap(a[0][i], a[N - 1][i]);
        }
    }

    return 0;
}
