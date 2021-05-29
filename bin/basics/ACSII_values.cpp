#include<iostream>

int getACSII(char letter);

int main(){
    char letter;
    std::cout << "Enter your letter to transform in ACSII value: " << std::endl;

    std::cin >> letter;
    int result = getACSII(letter);
    std::cout << "Your value in ACSII is:"<< result << std::endl;    
}


int getACSII(char letter){
    return int(letter);
}