#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define MAX_MARKS 100
#define SUBJECTS 5

int main()
{
    string name,s;
    int marks[SUBJECTS];
    long code;
    char section;
    int total=0;
    float average;
    bool pass;
    cout<<"Enter student name: ";
    getline(cin,s);
    cout<<"Enter Section: ";
    cin>>section;
    cout<<"Enter college code: ";
    cin>>code;
    cout<<"Enter marks in all subjects: "<<endl;
    for(int i=1;i<=SUBJECTS;i++)
    {
        cin>>marks[i];
        total+=marks[i];
    }
    average=(float)total/SUBJECTS;
    cout<<"Total Marks = "<<total<<endl<<"Average marks = "<<fixed<<setprecision(3)<<average<<endl;
    if(total<=35)
    {
        pass=0;
    }
    else
    {
        pass=1;
    }
    cout<<"Pass status: "<<pass<<endl;
}