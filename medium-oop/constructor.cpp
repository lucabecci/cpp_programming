#include<iostream>
#include <string>

//predeterminade constructor
class Car {
    public:
        int wheels;
        Car(){
            wheels = 4;
        }
        void log_wheels(){
            std::cout << wheels << std::endl;
        }
} car;

//param constructor
class Box {
    public:
    int size;
    Box(int s){
        size = s;
    };
    void log_size(){
        std::cout << size << "cm" << std::endl;
    };
};

//multi constructor
class User {
    public:
        std::string username;
        std::string password;
        User(std::string u, std::string p){
            username = u;
            password = p;
        };
        User(std::string u){
            username = u;
        };
        void log_information(){
            if(password.length() > 0){
                std::cout << username << " and " << password << std::endl;
            }else{
                std::cout << username << std::endl;
            };
        }
};

int main() {
    //pred constructor
    car.log_wheels();
    //param constructor
    Box b(20);
    b.log_size();
    //multi constructor with one param in constructor
    User u("Luca");
    u.log_information();
    //multi constructor with two param in constructor
    User u2("Luca2", "fakepassword");
    u2.log_information();
}