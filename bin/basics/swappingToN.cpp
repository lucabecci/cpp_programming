#include<iostream>

class Resolve {
    public: 
        void swapping(int a, int b);
};

void Resolve::swapping(int a, int b){
    int c;

    c = a;
    a = b;
    b = c;
    std::cout << "New value of A:" << a << std::endl;
    std::cout << "New value of B:" << b << std::endl;
};

int main(){
    int a, b;
    Resolve r;
    std::cout << "Enter A and B:" << std::endl;
    std::cin >> a >> b;
    r.swapping(a, b);
}