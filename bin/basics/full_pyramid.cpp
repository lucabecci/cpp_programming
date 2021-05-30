#include<iostream>

class Resolve {
    public:
        void full(int rows);
};

void Resolve::full(int rows) {
    int space;

    for (int i = 1, k = 0; i <= rows; i++, k=0)
    {
        for(space = 1; space <= rows - i; space++){
            std::cout << "  ";
        }
        while(k != 2*i-1){
            std::cout << "* ";
            k++;
        }
        std::cout << std::endl;
    }
    
}

int main() {
    int rows;
    Resolve r;
    std::cout << "Insert rows for the pyramid" << std::endl;
    std::cin >> rows;

    r.full(rows);
}