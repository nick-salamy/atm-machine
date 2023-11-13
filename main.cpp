#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName;
    int choice = 0;
    float balance = 0.00;
    float balanceToAdd = 0.00;
    float withdrawl = 0;
    cout << "Hello, Please enter your name" << endl;
    getline(cin, userName);
    cout << "Welcome, " << userName << endl;
    while(choice != 4 ) {
        cout << "1. Balance\n" << "2. Deposit\n" << "3. Withdraw\n"
        << "4. Exit\n";
        cin >> choice;
        switch(choice) {
            case 1: cout << "\nYour Balance is: " << balance << endl;
            break;

            case 2: cout << "Enter the amount you would like to deposit: ";
                    cin >> balanceToAdd;
                    balance += balanceToAdd;
                break;
            case 3: cout << "\nEnter the amount to withdraw: ";
                    cin >> withdrawl;
                    while(withdrawl > balance){
                        cout << "Withdraw is greater than balance. Balance is: " << balance << ". Please try again: ";
                        cin >> withdrawl;
                    }
                    balance -= withdrawl;
        }

    }
    return 0;

}
