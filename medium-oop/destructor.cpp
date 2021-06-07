#include<iostream>

class AutoDestruction{
    public:
        AutoDestruction(){
        std::cout << "Initialization" << std::endl;
        };
        ~AutoDestruction(){
            std::cout << "Finalization...BUUUUM!!!!!" << std::endl;
        };
};

int main(){
    AutoDestruction a;
}