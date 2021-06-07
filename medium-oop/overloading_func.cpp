#include<iostream>

class Example {
    public:
        void sum(int x, int y){
            std::cout << "The sum of x and y is: " << x + y << std::endl;
        };
        void sum(int x, int y, int z){
            std::cout << "The sum of x, y and z is: " << x + y + z << std::endl;
        };
        void substract(int v, int r = 20){
            std::cout << "V substracted by r is: " << v - r << std::endl;
        };
} test;

int main(){
    std::cout << "Sum with two params" << std::endl;
    test.sum(5, 10);
    std::cout << "Sum with three params" << std::endl;
    test.sum(10, 15, 5);
    std::cout << "Substract final value" << std::endl;
    test.substract(10);
}