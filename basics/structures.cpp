#include<iostream>

struct Human{
    char name[50];
    int age;
    float salary;
};

int main() {
    Human h;
    std::cin.get(h.name, 50);
    std::cin >> h.age;
    std::cin >> h.salary;

    std::cout << "Name:" << h.name << std::endl;
    std::cout << "Age:" << h.age << std::endl;
    std::cout << "Salary:" << h.salary << std::endl;
}