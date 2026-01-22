#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three sides of a triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a)
    {
        cout<<a<<","<<b<<" "<<"and "<<c<<" forms a Valid Triangle";
    }
    else
    {
        cout<<a<<","<<b<<"m"<<"and "<<c<<" does not forms a Valid Triangle";
    }
}