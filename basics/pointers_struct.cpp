#include<iostream>

using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main()
{
    Distance *ptr, d;
    ptr = &d;

    cout << "Enter feet:" << endl;
    cin >>  (*ptr).feet;
    cout << "Entrer inch:" << endl;
    cin >> (*ptr).inch;

    cout << "Distance = " << (*ptr).feet << " || Feet:" << (*ptr).inch << endl;
    return 0;
}