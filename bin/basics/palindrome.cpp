#include<iostream>
#include<string.h>


int main(){
    char string[50];
    int len, i, x, flag=0;

    std::cout << "Enter a string(max 48 characters): " << std::endl;
    std::cin >> string;
    len = strlen(string);
    for(i=0, x=len - 1; i <= len/2; i++, x--){
        if(tolower(string[i]) != tolower(string[x])){
            flag=1;
            break;
        }
    }
    if(flag==0){
        std::cout << string << " is a palindrome" << std::endl;
    }else{
        std::cout << string << " is not a palindrome" << std::endl;
    }

}
