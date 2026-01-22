#include <iostream>
using namespace std;

int main()
{
    int speed,distance,time,choice;
    cout<<"Speed and Distance Calculator"<<endl;
    cout<<"1.Calculate Speed\n2.Calculate Distance\n";
    cout<<"Enter choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        {
            cout<<"Enter Distance and Time: ";
            cin>>distance>>time;
            speed=distance/time;
            cout<<"Speed = "<<speed<<endl;
        };break;
        case 2:
        {
            cout<<"Enter speed and time: ";
            cin>>speed>>time;
            distance=speed*time;
            cout<<"Distance = "<<distance<<endl;
        };break;
        default:cout<<"Invalid";
    }
    return 0;
}