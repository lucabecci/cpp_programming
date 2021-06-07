#include<iostream>

using namespace std;

struct Cat
{
    int legs;
};

void countLegs(Cat c)
{
    cout << c.legs << endl;
};


int main()
{
    Cat c;
    c.legs = 4;
    countLegs(c);
    cout << "Finishing the program..." << endl;
}