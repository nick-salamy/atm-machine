#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
    private:
        string userName;
        int pin;
    public:
        void setPin(int);
        void setUserName(std::string);
        int getPin();
        string getUserName(); 
};
#endif