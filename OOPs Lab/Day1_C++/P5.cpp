#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a,b,choice;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;break;
        case 2:cout<<"sub of "<<a<<" and "<<b<<" is "<<a-b;break;
        case 3:cout<<"mul of "<<a<<" and "<<b<<" is "<<a*b;break;
        case 4:cout<<"div of "<<a<<" and "<<b<<" is "<<a/b;break;
        case 5:cout<<"mod of "<<a<<" and "<<b<<" is "<<a%b;break;
        default:cout<<"Invalid choice";
    }
}