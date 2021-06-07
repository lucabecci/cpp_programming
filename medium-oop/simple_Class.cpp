#include<iostream>

using namespace std;

class Car {
    public:
        char voice[5] = "Guau";
        void sound(){
            cout << voice << endl;
        }
};

int main(){
    Car object = Car();
    object.sound();
}