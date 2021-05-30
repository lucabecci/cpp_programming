#include<iostream>

class Resolve {
    public:
        void pascal_triangle(int rows);
};

void Resolve::pascal_triangle(int rows){
    int place, i, j, k, c;
    place = rows;
    for(i = 0; i < rows; i++){
        c = 1;
        for(k=place;k >= 0; k--)
        std::cout << " ";
        place--;
        for(j=0; j <= i; j++){
            std::cout << c << " ";
            c=(c*(i-j)/(j+1));
        }
        std::cout << std::endl;
    }
};

int main(){
    int rows;
    Resolve r;
    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> rows;

    r.pascal_triangle(rows);
}