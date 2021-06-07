#include<iostream>

class Human{
    public:
        int arms = 2;
        int legs = 2;
        void say_hi(){
            std::cout << "Hi my friend" << std::endl;
        };

    private:
        long document = 33323123123;
        int age = 32;

    protected:
        char hair_color[6] = "Brown";
};

int main(){
    Human me = Human();

    me.say_hi();
}