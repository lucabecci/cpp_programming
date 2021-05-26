#include<iostream>

using namespace std;

int main()
{
    //with pointer example
    float pi = 3.14;
    typedef float* FloatPointer;
    FloatPointer k;
    k = &pi;
    cout << "Ubication of k pointer: ";
    cout << k << endl;
    cout << "Value of k pointer: ";
    cout << *k << endl;

}