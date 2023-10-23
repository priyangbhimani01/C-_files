#include<iostream>
#include<string>
using namespace std;

class bank
{
private:
    int amount;
    string name;
    string accountnumber;
    int balance;
    string pin;
    int choice;
    int option;

public:
    
    void start(void)
    {
        cout << "enter the account number" << endl;
        cin >> accountnumber;
        if (accountnumber.length() < 10)
        {
            cout << "invalid account number" << endl;
            exit(0);
        }
        else if (accountnumber.length() > 10)
        {
            cout << "invalid account number" << endl;
            exit(0);
        }
        cout << "enter the account holder name" << endl;
        cin >> name;
        cout << "enter the balance" << endl;
        cin >> balance;
        cout << "enter the amount" << endl;
        cin >> amount;
        cout << "enter the pin number" << endl;
        cin >> pin;
        if (pin.length() < 4)
        {
            cout << "invalid pin number" << endl;
            exit(0);
        }
        else if (pin.length() > 4)
        {
            cout << "invalid pin number" << endl;
            exit(0);
        }

        cout << "1 --> Saving account" << endl;
        cout << "2 --> Current account" << endl;
        cout << "3 --> Money market account" << endl;

        cout << "enter the account type";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "You can deposit/withdraw/transfer 40000 rupees at a time" << endl;
            break;

        case 2:
            cout << "You can deposit/withdraw/transfer 100000 rupees at a time" << endl;
            break;

        case 3:
            cout << "You can deposit/withdraw/transfer 250000 rupees at a time" << endl;
            break;
        }

        cout << "1 --> For Withdrawl" << endl;
        cout << "2 --> For Deposit" << endl;
        cout << "3 --> To transfer money " << endl;
        cout << "enter the option";
        cin >> option;

        switch (option)
        {

        case 1:

            if (balance >= amount)
            {
                balance = balance - amount;
                cout << "new balance is" << balance << endl;
            }
            else
            {

                cout << "Not sufficient balance" << endl;
            }

            cout << "Thank You" << endl;

            break;

        case 2:

            balance = balance + amount;
            cout << "new balance is" << balance;
            cout << '\n';
            cout << "Thank you";
            break;

        case 3:

            cout << "enter the account number, in which you want to transfer the money" << endl;
            cin >> accountnumber;
            if (accountnumber.length() < 10)
            {
                cout << "invalid account number" << endl;
                break;
            }
            else if (accountnumber.length() > 10)
            {
                cout << "invalid account number" << endl;
                break;
            }
            else {

            balance = balance - amount;
            cout << "new balance is" << balance;
            cout << '\n';
            cout << "Thank you";
            break;
            }

        default:
            cout << "wrong choice";
            break;
        }
    }
};

int main()
{
    bank customer;
    
    int option;
    cout << "ENTER THE DEBIT/CREDIT CARD IN TO THE ATM MACHINE" << endl;

    customer.start();
}