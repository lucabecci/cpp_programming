#include<iostream>

class User{
    private: 
        char password[18] = "ThisIsMyPassword;";
        char email[16] = "email@email.com";
    public:
        char username[8] = "LucaBec";
        char* getEmail(){
            return email;
        };
        char* setEmail(char newEmail){
            *email = newEmail;
            return email;
        };
};

int main(){
    User me;
    char* old_email = me.getEmail();
    std::cout << old_email << std::endl;
}