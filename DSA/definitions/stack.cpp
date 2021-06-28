#include<iostream>

class Stack
{
    private:
        int top = -1;
    public:
        void push(int stack[], int x, int length);
        bool isEmpty();
        void pop();
        int size();
        int topElement(int stack[]);
};

void Stack::push(int stack[], int x, int length)//insert item in top-index
{
    if(top == (length - 1) )
    {
        std::cout << "Error: The stack is full - OVERFLOW ERROR" << std::endl;
    }
    else
    {
        top = top + 1;
        stack[ top ] = x;
    }
};

bool Stack::isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
};
void Stack::pop() //pop the last index/item
{
    if (isEmpty()) 
    {
        std::cout << "Error: Stack is empty - UNDERFLOW EROR";
    }
    else
    {
        top = top -1;
    }
    
};
int Stack::size()
{
    return (top + 1);
};
int Stack::topElement(int stack[])
{
    return stack[ top ];
};
int main()
{
    Stack s;
    int stack [3];
    //exec class wth stack 
    std::cout << "Current size of the stack: " << s.size() << std::endl;
    
    s.push(stack, 234, 3);
    s.push(stack, 12, 3);
    
    std::cout << "Current size of the stack: " << s.size() << std::endl;

    s.push(stack, 4, 3);
    std::cout << "The current top element in the stack is: " << s.topElement(stack) << std::endl;

    //generate an overflow error
    s.push(stack, 33, 3);

    //delete all elements of the stack
    for (int i = 0; i < sizeof(stack)/sizeof(stack[0]); i++)
    {
        s.pop();
    }
    std::cout << "Current size of the stack after delete all elements: " << s.size() << std::endl;
    
    //generate an underflow error
    s.pop();
}
