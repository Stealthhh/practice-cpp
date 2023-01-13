#include <iostream>
#include <vector>
#include <string>

struct Employee {
  std::string surname;
  std::string name;
  int age;
};

int main() {
  std::vector<Employee> employees;

  // Ввод информации о сотрудниках
  while (true) {
    std::cout << "Введите информацию о сотруднике (фамилия имя лет): ";
    std::string surname, name;
    int age;
    std::cin >> surname >> name >> age;
    if (surname == "done") break;
    employees.push_back({surname, name, age});
  }

  // Вывод имен сотрудников старше 28 лет
  std::cout << "Сотрудники старше 28 лет:\n";
  for (const auto& employee : employees) {
    if (employee.age > 28) {
      std::cout << employee.name << '\n';
    }
  }

  return 0;
}
