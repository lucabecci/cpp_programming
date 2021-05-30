#include<iostream>

using namespace std;

void counter()
{
    static int number = 0;//1,2,3 ==> Because is a static function
    number++;
    cout << number << endl;
}

int main()
{   
    counter();
    counter();
    counter();
    
    cout << "Closing the program..." << endl;

}