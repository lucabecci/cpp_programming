#include<iostream>

int main(){
    int arr[] = {5, 4, 12, 7, 15, 9};
    int length = sizeof(arr)/sizeof(arr[0]);
    //reverse loop
    std::cout << "Reverse loop" << std::endl;
    for(int i = length-1; i >= 0; i--){
        std::cout << arr[i] << std::endl;
    }
    //normal loop
    std::cout << "Normal loop" << std::endl;
    for(int j = 0; j < length; j++){
        std::cout << arr[j] << std::endl;
    }
}