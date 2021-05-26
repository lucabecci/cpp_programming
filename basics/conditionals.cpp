#include<iostream>

using namespace std;

int main()
{
    //simple if
    if(1 > 0)
    {
        cout << "1 is greater than 0" << endl;
    }
    //else if operation
    if('A' == 'B')
    {
        cout << "A is equal to B" << endl;
    }
    else
    {
        cout << "A is not equal to B" << endl;
    }
    //anidation of if-else
    if(4 > 2 && 4 < 5)
    {
        if(4 == 3)
        {
            cout << "Error passing..." << endl;
        }
        else
        {
            cout << "ERRORRRRRRR UWU" <<  endl;
        }  
    }else
    {
        cout << "IF YOU CAN SEE THIS COUT C++ IS A BAD LANGUEAGE" << endl;
    }
}