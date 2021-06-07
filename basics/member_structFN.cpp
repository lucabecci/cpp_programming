#include<iostream>

using namespace std;

struct Car
{
    int velocity;
    int patent;
};

Car changeVelocity(Car c)
{   
    cout << "Insert the velocity" << endl;
    cin >> c.velocity;
    return c;
};

void seeVelocity(Car c)
{
    cout << "Velocity:" << c.velocity << endl;
};

int main()
{   Car car;
    car = changeVelocity(car);
    seeVelocity(car);
    cout << "Endl" << endl;
}