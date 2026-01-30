#include <iostream>
#include <iomanip>
using namespace std;
#define WEIGHT_THEORY 0.7

int main()
{
    int marks[5],sports,i=1,total;
    float avr,point;
    bool pass,scholarship;
    char choice='Y';
    while(choice!='N')
    {
        total=0;
        cout<<"Enter marks of student "<<i<<endl;
        for(int i=1;i<=5;i++)
        {
            cin>>marks[i];
            total+=marks[i];
        }
        cout<<"Enter sports score: ";
        cin>>sports;
        avr=(float)total/5;
        point=avr*WEIGHT_THEORY;
        pass=(marks[1]>35 && marks[2]>35 && marks[3]>35 && marks[4]>35 && marks[5]>35);
        scholarship=(avr>85 || sports>80);
        cout<<endl<<"-----Student "<<i<<" result-----"<<endl;
        cout<<"Average: "<<fixed<<setprecision(1)<<avr<<endl;
        cout<<"Grade Point: "<<fixed<<setprecision(2)<<point<<endl;
        cout<<"Result: "<<(pass?"PASS":"FAIL")<<endl;
        cout<<"Rank category: "<<(avr>90?"A":"B")<<endl;
        cout<<"Scholarship: "<<(scholarship?"ELIGIBLE":"NOT ELEGIBLE")<<endl<<endl;
        cout<<"Enter next student(Y/N): ";
        cin>>choice;
        i++;
    }
}