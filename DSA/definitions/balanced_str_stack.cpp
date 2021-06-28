#include<iostream>

using namespace std;

int top;

class Balancing
{
    public:
        void check(char str[ ], int length, char stack [])
        {
            for (int i = 0; i < length; i++)
            {
                if(str[i] == '(')
                {
                    top = top + 1;
                    stack[top] = '(';
                }
                if(str[i] == ')')
                {
                    if(top == -1)
                    {
                        top = top - 1;
                        break;
                    }
                    else
                    {
                        top = top - 1;
                    }
                }
            }
            if(top == -1)
            {
                cout << "String is balanced" << endl;
            }
            else
            {
                cout << "String is not balanced" << endl;
            }
        };
};

int main()
{
    Balancing b;
    cout << "Balancing parenthesis str!!!" << endl;
    char str_balanced [ ] = { '(' , 'a' , '+', '(', 'b' , '-' , 'c' ,')' , ')'};
    char str_unbalanced [ ] = { '(' , '(' , 'a' , '+' , 'b' , ')' };

    //stack creation
    char stack [15];
    //run check function
    top = -1;
    b.check(str_balanced, 9, stack);
    top = -1;
    b.check(str_unbalanced, 5, stack);
}