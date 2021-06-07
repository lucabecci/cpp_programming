#include<iostream>
int main() {
    int arr[2][4] = {{1,3,5,7}, {7,5,3,1}};
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        std::cout << "Column:" << i << std::endl;
        for (int k = 0; k < sizeof(arr[0])/sizeof(arr[0][0]); k++)
        {   
            std::cout << arr[i][k] << std::endl;
        }
    }
}