#include<iostream>

class Resolve {
    public :
        int calculator(int v1, int v2, char op);
};

int Resolve::calculator(int v1, int v2, char op){
    switch(op) {
        case '+':
            return (v1 + v2);
            break;
        case '-':
            return (v1 - v2);
            break;
        case '/':
            return (v1 / v2);
            break;
        case '*':
            return (v1 * v2);
            break;
        case '%':
            return (v1 % v2);
            break;
    }
}

int main() {
    int v1, v2;
    char op;
    Resolve r;
    std::cout << "Enter the type of your operation:" << std::endl;
    std::cin >> op;

    std::cout << "Enter the value of v1 and v2"<< std::endl;
    std::cin >> v1;
    std::cin >> v2;
      
    int result = r.calculator(v1, v2, op);
    std::cout << "Your result is: " << result << std::endl;
}