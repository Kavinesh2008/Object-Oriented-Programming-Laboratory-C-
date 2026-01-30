#include <iostream>
#include <iomanip>
using namespace std;
int balance=10000;

void deposit(int amount)
{
    balance=balance+amount;
    cout<<"Amount deposited successfully"<<endl;
}

void withdraw(int amount)
{
    if(amount <= balance)
    {
        balance=balance-amount;
        cout<<"Amount withdrawal successfull"<<endl;
    }
    else
    {
        cout<<"Balance insufficient";
    }
}

int getbalance()
{
    return balance;
}

int main()
{
    int choice,a=1,PIN,count=0;
    while(a)
    {
        cout<<"Enter PIN: ";
        cin>>PIN;
        if(PIN==1234)
        {
                do
                {
                    cout<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.Balance"<<endl<<"4.Exit"<<endl;
                    cout<<"Enter choice: ";
                    cin>>choice;
                    switch(choice)
                    {
                        case 1:
                        {
                            int amount;
                            cout<<"Enter amount to deposit: ";
                            cin>>amount;
                            deposit(amount);
                        };break;
                        case 2:
                        {
                            int amount;
                            cout<<"Enter amount to withdraw: ";
                            cin>>amount;
                            withdraw(amount);
                        };break;
                        case 3:cout<<"Balance amount = "<<getbalance()<<endl;break;
                        case 4:cout<<"Exiting...."<<endl;
                    }
                } while (choice!=4);
                a=0;
        }
        else
        {
                cout<<"Invalid PIN";
                count++;
                if(count==3)
                {
                    cout<<"Card blocked";
                    a=0;
                }
        }
    }
}