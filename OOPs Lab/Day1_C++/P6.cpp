#include <iostream>
using namespace std;

int main()
{
    int units;
    cout<<"Electricity Bill Calculator"<<endl;
    cout<<"Enter number of units of consumed: ";
    cin>>units;
    if(units<=100)
    {
        cout<<"Electricity Bill is $ "<<(units*1.50)<<endl;
    }
    else if(units>100 && units<=200)
    {
        cout<<"Electricity Bill is $ "<<(100*1.50)+((units-100)*2.50)<<endl;
    }
    else
    {
        cout<<"Electricity Bill is $ "<<(100*1.50)+(100*2.50)+((units-200)*4)<<endl;
    }
}