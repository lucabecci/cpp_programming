#include<iostream>

using namespace std;

int main()
{
    //simple
    for(int i = 0; i <= 4; i++)
    {
        cout << "Loop counter: ";
        cout << i << endl;
    }

    //an.
    for(int k = 0; k <= 2; k++)
    {
        cout << "K loop at time: ";
        cout << k << endl;
        for(int j = 0; j <= 2; j++)
        {
            cout << "J intern loop at time: ";
            cout << j << endl;
        }
    }
    
}