#include<iostream>

int main(){
    int n, i;
    std::cout << "Enter the number:" << std::endl;
    std::cin >> n;

    for(i = 2; i <= n; i++){
        if(n%i==0){
            break;
        }
    }
    if(n == i){
        std::cout << n << " is a number prime" << std::endl;
    }else{
        std::cout << n << " is not a number prime" << std::endl;        
    }
}