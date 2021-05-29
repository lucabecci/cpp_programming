#include<iostream>

bool is_positive(int n1);

int main(){
    int number;
    std::cout << "Please insert a number" << std::endl;
    std::cin >> number;

    bool result = is_positive(number);
    result ? 
    std::cout << "El numero es positivo" << std::endl
    : 
    std::cout << "El numero es negativo" << std::endl;
}

bool is_positive(int n1){
    if(n1 > 0){
        return true;
    }else{
        return false;
    }
}