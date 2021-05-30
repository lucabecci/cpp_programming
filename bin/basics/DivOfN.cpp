#include<iostream>

int main(){
    int element, i;
    std::cout << "Insert the number to search the divisors" << std::endl;
    std::cin >> element;

    std::cout << "All divisors of " << element << std::endl;
    for(i = 1; i <= element; i++){
        if(element % i == 0){
            std::cout << i << " is divisor" << std::endl;
        }else{
            continue;
        }
    }
}