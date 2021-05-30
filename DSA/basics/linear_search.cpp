#include<iostream>

class Resolve{
    public:
        int linear_search(int values[], int target, int length);
};

int Resolve::linear_search(int values[], int target, int length){
    for (int i = 0; i < length; i++)
    {
        if(values[i] == target){
            return values[i];
        }else{
            continue;
        }
    }
    return -1;
    
};

int main(){
    Resolve r;
    int arr[] = { 22, 55, 343, -233, 2332, 1000};
    int search = 2332;
    int length = sizeof(arr)/sizeof(arr[0]);
    int result = r.linear_search(arr, search, length);
    if(result == search){
        std::cout << "The number exists in the array" << std::endl;
    }else{
        std::cout << "The number not exists in the array" << std::endl;
    }
}