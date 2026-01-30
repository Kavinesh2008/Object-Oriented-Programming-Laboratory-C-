#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    float P,N,R,SI,CI;
    cout<<"Enter P,N and R: ";
    cin>>P>>N>>R;
    SI=(P*N*R)/100;
    CI=P*pow((1+(R/100)),2)-P;
    cout<<"Simple Interest = "<<fixed<<setprecision(2)<<SI<<endl<<"Compound Interest = "<<CI<<endl;

}