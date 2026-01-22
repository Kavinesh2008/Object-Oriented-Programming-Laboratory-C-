#include <iostream>
using namespace std;

int main()
{
    int b,s;
    cout<<"Profit/Loss Calculator"<<endl;
    cout<<"Enter the cost of bought stocks: ";
    cin>>b;
    cout<<"Enter the cost of sell stocks: ";
    cin>>s;
    if(b==s)
    {
        cout<<"No Profit No Loss";
    }
    else if(b>s)
    {
        cout<<"Loss "<<b-s<<endl;
    }
    else
    {
        cout<<"Profit "<<-(b-s)<<endl;
    }
    return 0;
}