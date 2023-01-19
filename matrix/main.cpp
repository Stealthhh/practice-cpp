#include <iostream>

int main()
{
    int ROWS, COLS;
    std::cout << "Enter the number of rows: ";
    std::cin >> ROWS;
    std::cout << "Enter the number of columns: ";
    std::cin >> COLS;
    int matrix[ROWS][COLS];
    std::cout << "Enter the matrix elements: " << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cin >> matrix[i][j];
        }
    }
    int even_free_cols = 0;
    int positive_odd_cols[ROWS*COLS];
    int count = 0;

    for (int j = 0; j < COLS; j++) {
        bool even_found = false;
        for (int i = 0; i < ROWS; i++) {
            if (matrix[i][j] % 2 == 0) {
                even_found = true;
                break;
            }
        }
        if (!even_found) {
            even_free_cols++;
        } else if (j % 2 != 0) {
            for (int i = 0; i < ROWS; i++) {
                if (matrix[i][j] > 0) {
                    positive_odd_cols[count++] = matrix[i][j];
                }
            }
        }
    }

    std::cout << "Number of columns without even elements: " << even_free_cols << std::endl;
    if (count > 0) {
        std::cout << "Positive elements of odd columns: ";
        for (int i = 0; i < count; i++) {
            std::cout << positive_odd_cols[i] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}