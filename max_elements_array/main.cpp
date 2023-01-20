#include <algorithm>
#include <iostream>

int main() {
    const int SIZE = 7;
    int arr[SIZE] = {-5, 2, -7, 8, -1, 10, -3};
    int max_mod = 0;
    int max_mod_index = 0;
    int sum_after_max = 0;
    
    // Find the maximum element by modulus
    for (int i = 0; i < SIZE; i++) {
        if (abs(arr[i]) > abs(max_mod)) {
            max_mod = arr[i];
            max_mod_index = i;
        }
    }
    
    std::cout << "Maximum by modulus: " << max_mod << std::endl;
    
    // Sum of all elements after the maximum element by modulus
    for (int i = max_mod_index + 1; i < SIZE; i++) {
        sum_after_max += arr[i];
    }
    
    std::cout << "Sum after maximum by modulus: " << sum_after_max << std::endl;
    
    // Sort elements after the maximum element by modulus
    std::sort(arr + max_mod_index + 1, arr + SIZE);
    
    std::cout << "Elements after maximum by modulus sorted: ";
    for (int i = max_mod_index + 1; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}