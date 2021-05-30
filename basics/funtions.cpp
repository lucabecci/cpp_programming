#include<iostream>

using namespace std;

void calc(float *n);

int main()
{
    float pi = 3.14;
    calc(&pi);
    cout << pi << endl;
}

void calc(float *n)
{
    *n = *n + 1;
}

