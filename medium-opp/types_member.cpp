#include<iostream>

class Example{
    public:
        int unmodified = 0;
        void count_three(int multiply){ //member function simple and basic
            int value = 0;
            for (int i = 0; i <= 3; i++)
            {  
                multiply = multiply * multiply;
            };
            std::cout << multiply << std::endl;
        };
        static void say_hello(){ //static function
            std::cout << "Hello" << std::endl;
        };

        void constant_func() const{ //this functions cant modify any value 
            std::cout << unmodified << std::endl;
        }

        friend void modify_param(int number); //friend function where the function can to use the properties and methods of the object
} test;

void modify_param(int number){
    Example ex;
    ex.unmodified = number;
    std::cout << ex.unmodified << std::endl;
}

int main(){
    test.say_hello();
    Example::say_hello();
    test.constant_func();
    modify_param(12);
}