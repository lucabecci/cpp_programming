#include<iostream>

class Cube {
    public:
        int side;
        int getVolume();
};

int Cube::getVolume(){
    return side*side*side;
}

int main(){
    Cube item;
    item.side = 25;
    std::cout << "The volume of item is: " << item.getVolume() << std::endl; 
}

