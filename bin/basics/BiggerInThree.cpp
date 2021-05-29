#include<iostream>

float bigger(float n1, float n2, float n3);
float smaller(float n1, float n2, float n3);
int main(){
    float n1, n2, n3;
    std::cout <<  "Insert three numbers for the problem: " <<  std::endl;
    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;
    if(n1 < 1 || n2 < 1 || n3 < 1){
        std::cout << "Please insert valid numbers." << std::endl;
        exit(3);
    };
    float result_bigger = bigger(n1, n2, n3);
    float result_smaller = smaller(n1, n2, n3);
    std::cout << "The bigger is: ";
    std::cout << result_bigger << std::endl;
    std::cout << "The smaller is: ";
    std::cout << result_smaller << std::endl;
}

float bigger(float n1, float n2, float n3){
    if(n1 > n2 && n1 > n3){
        return n1;
    }else if(n2 > n1 && n2 > n3){
        return n2;
    }else{
        return n3;
    }
}

float smaller(float n1, float n2, float n3){
    if(n1 < n2 && n1 < n3){
        return n1;
    }else if(n2 < n1 && n2 < n3){
        return n2;
    }else{
        return n3;
    }
}
