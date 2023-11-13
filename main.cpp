#include <iostream>
#include <string>
using namespace std;

void showBalance(float bal) {
    cout << "Your balance is: " << bal << endl;
    return;
}

float addBalance(float bal){
    float add;
    cout << "Enter the amount you would like to deposit: ";
    cin >> add;
    bal += add;
    return bal;
}

float withdraw(float bal) {
    float withdraw;
    cout << "Enter the amount you would like to withdraw: ";
    cin >> withdraw;
    while(withdraw > bal){
        cout << "Insufficient Funds. Current balance is: " << bal << ". Enter new withdraw ";
        cin >> withdraw;
    }
    return bal -= withdraw;
}

int main()
{
    string userName;
    int choice = 0;
    float balance = 0.00;
    cout << "Hello, Please enter your name" << endl;
    getline(cin, userName);
    cout << "Welcome, " << userName << endl;
    while(choice != 4 ) {
        cout << "1. Balance\n" << "2. Deposit\n" << "3. Withdraw\n"
        << "4. Exit\n";
        cin >> choice;
        switch(choice) {
            case 1: showBalance(balance);
            break;

            case 2: balance = addBalance(balance);
                break;
            case 3: balance = withdraw(balance);
            
            /*cout << "\nEnter the amount to withdraw: ";
                    cin >> withdrawl;
                    while(withdrawl > balance){
                        cout << "Withdraw is greater than balance. Balance is: " << balance << ". Please try again: ";
                        cin >> withdrawl;
                    }
                    balance -= withdrawl;*/
        }

    }
    return 0;

}
