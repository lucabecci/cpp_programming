#include<iostream>

class Example {
    int v = 20;
    public:
        int a = 0;
        int getA(){//inline func
            return a;
        };
}test;


#define G (y) (y + 1); //inline func - macro


int main(){
    int result = test.getA();
    std::cout << result << std::endl;
}