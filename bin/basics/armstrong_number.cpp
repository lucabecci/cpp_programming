#include<iostream>

bool search_armstrong(int v);

int main(){
    int v;
    std::cout << "Insert the number to evalue:" << std::endl;
    std::cin >> v;
    bool result = search_armstrong(v);
    if(result){
        std::cout << "The number is a armstrong number." << std::endl;
    }else{
        std::cout << "The number is not a armstrong number." << std::endl;
    }
}

bool search_armstrong(int v){
    int original_num, remainder, result = 0;
    original_num = v;
    while(original_num != 0){
        remainder = original_num % 10;

        result += remainder * remainder * remainder;

        original_num /= 10;
    }
    if(result == v){
        return true;
    }else{
        return false;
    }
}

