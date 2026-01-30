#include <iostream>
#include <iomanip>
using namespace std;
double cash=50000;
const double COMMISSION=0.02;

int main()
{
    int i=1;
    double comm,profit;
    while(i<=3)
    {
        int shares;
        double price,amount;
        char choice;
        cout<<"Transaction "<<i<<endl;
        cout<<"Enter Buy or sell(B/S): ";
        cin>>choice;
        cout<<"Enter number of shares: ";
        cin>>shares;
        cout<<"Enter price per share: ";
        cin>>price;
        amount=(shares*price);
        comm=amount*COMMISSION;
        if(choice=='B')
        {
            cash-=(amount+comm);
        }
        else if(choice=='S')
        {
            cash+=(amount-comm);
        }
        i++;
    }
    cout<<fixed<<setprecision(2);
    cout<<setw(40)<<setfill('-')<<"Portfolio Summary"<<setw(30)<<right<<setfill('-')<<endl;
    cout<<setfill(' ');
    cout<<setw(30)<<left<<"Initial Cash"<<":"<<right<<50000<<endl;
    cout<<setw(30)<<left<<"Final Cash"<<":"<<right<<cash<<endl;
    profit=cash-50000;
    cout<<setw(30)<<left<<"Profit/Loss"<<":"<<profit<<endl;
    cout<<setw(30)<<left<<"Change(%)"<<":"<<(profit/50000.0)*100<<"%"<<endl;
}