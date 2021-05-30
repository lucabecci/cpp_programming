#include<iostream>

class Resolve {
    public: 
        void factorial(int n);
};

void Resolve::factorial(int n){
    int i, sum = 1;
    for(i = 2; i <= n; i++){
        sum *= i; 
    }
    std::cout << "Tne factorial of " << n << " is: " << sum << std::endl; 
};

int main() {
    Resolve r;
    int n;
    std::cout << "----Factorial problem----" << std::endl;
    std::cout << "Insert a number:" << std::endl;
    std::cin >> n;
    r.factorial(n);
}

