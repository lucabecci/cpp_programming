#include<iostream>

using namespace std;


enum designflags 
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    int myDesign = BOLD | UNDERLINE;

    cout << myDesign;

    return 0;
}