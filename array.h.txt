#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
  double arr[] = {-1.5, 0.0, 3.7, 0.0, 2.1, 0.0, -2.3};
  int n = sizeof(arr) / sizeof(arr[0]);

  double min_element = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < min_element) {
      min_element = arr[i];
    }
  }
  cout << "Минимальный элемент: " << min_element << endl;

  double sum = 0.0;
  bool found_first_positive = false;
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0.0) {
      found_first_positive = true;
    }
    if (found_first_positive && arr[i] > 0.0) {
      sum += arr[i];
    }
  }
  cout << "Сумма: " << sum << endl;

  sort(arr, arr + n, [](double a, double b) {
    if (a == 0.0 && b == 0.0) {
      return false;
    }
    if (a == 0.0) {
      return true;
    }
    if (b == 0.0) {
      return false;
    }
    return a < b;
  });

  cout << "Сортированный массив: [";
  for (int i = 0; i < n; i++) {
    cout << arr[i];
    if (i < n - 1) {
      cout << ", ";
    }
  }
  cout << "]" << endl;

  return 0;
}