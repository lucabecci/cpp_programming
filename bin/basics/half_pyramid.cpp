#include<iostream>

int main() {
    int rows;

    std::cout << "Enter number of rows" << std::endl;
    std::cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*" <<  " ";
        }
        std::cout << std::endl;
    }
    return 0;
}