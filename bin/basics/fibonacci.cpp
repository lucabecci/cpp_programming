#include<iostream>

class Resolve {
    public:
        void fibonacci(int n);
};

int main() {
    int terms;
    Resolve r;

    std::cout << "Enter the terms to fibonacci series:" << std::endl;
    std::cin >> terms;

    r.fibonacci(terms);
}

void Resolve::fibonacci(int n) {
    int i, t1 = 0, t2 = 1, nextTerm = 0;
    for(i = 1; i <= n; i++) {
        if(i == 1){
            std::cout << " " << t1 << std::endl;
        }else if(i == 2){
            std::cout << " " << t2 << std::endl;            
        }else{
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            std::cout << " " << nextTerm << std::endl;
        }
    }
};