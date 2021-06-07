#include<iostream>

void counter() {//in functions
    static int counter = 0;
    std::cout << counter++ << std::endl;
}

class Example {//in test
    public:
        void static add(){
            int static i;
            std::cout << i++ << std::endl;
        };
};

int main() {
    std::cout << "Normal func example" << std::endl;
    counter();
    counter();
    counter();
    std::cout << "Class func example" << std::endl;
    Example::add();
    Example::add();
    Example::add();
    Example::add();
}