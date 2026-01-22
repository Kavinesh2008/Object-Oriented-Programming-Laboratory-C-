#include <iostream>
#include <string>
using namespace std;

int main()
{
    string c;
    cout<<"Traffic Light Simulator"<<endl;
    cout<<"Enter a color: ";
    cin>>c;
    if(c=="red")
        cout<<"STOP";
    else if(c=="green")
        cout<<"GO";
    else if(c=="yellow")
        cout<<"SLOW DOWN";
    else
        cout<<"Enter a valid color";
    return 0;
}
