#include <iostream>
#include <iomanip>
using namespace std;
#define C_TO_F (9.0)/(5.0)
#define C_TO_K 273.15

int main()
{
    int temp;
    float C,F,K;
    char c;
    cout<<"Enter temperature: ";
    cin>>temp;
    cout<<"Enter choice(C/K/F): ";
    cin>>c;
    if(c=='C')
    {
        C=temp;
        F=(C*C_TO_F)+32;
        K=C+C_TO_K;
    }
    else if(c=='F')
    {
        F=temp;
        C=(F-32)*(5.0)/(9.0);
        K=C+C_TO_K;
    }
    else
    {
        K=temp;
        C=K-C_TO_K;
        F=(C*C_TO_F)+32;
    }
    cout<<endl<<"Celcius = "<<fixed<<setprecision(3)<<C<<endl<<"Farenheit = "<<F<<endl<<"Kelvin = "<<K<<endl;
}