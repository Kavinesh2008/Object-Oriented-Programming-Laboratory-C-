#include <iostream>
#include <iomanip>
#define URGENT_THRESHOLD 20
using namespace std;

int main()
{
    int stock,days[7],choice;
    cout<<"Enter current stock: ";
    cin>>stock;
    cout<<"Enter sales for 7 days: "<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>days[i];
        stock-=days[i];
    }
    cout<<"Remaining Stock: "<<stock<<endl;
    if(stock<=0)
        cout<<"Stock empty. Reorder needed"<<endl;
    else if(stock<URGENT_THRESHOLD)
        cout<<"Low stock"<<endl;
    else
        cout<<"stock sufficient"<<endl;
    cout<<"Enter urgency (1.Urgent, 2.Normal): ";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"Vendor 1(Fast)"<<endl;break;
        case 2:cout<<"Vendor 2(Cheap)"<<endl;break;
        default:cout<<"invalid choice"<<endl;
    }
}