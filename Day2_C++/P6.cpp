#include <iostream>
#define MIN_ATTENDANCE 75
using namespace std;

int main()
{
    int n,marks[5];
    float average;
    float attendance;
    char grade;
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int total=0;
        cout<<"Enter the marks of student "<<i<<endl;
        for(int i=1;i<=5;i++)
        {
            cin>>marks[i];
            total+=marks[i];
        }
        cout<<"Enter Attendance Percentage: ";
        cin>>attendance;
        average=(float)total/5;
        if(average>=90)
            grade='A';
        else if(average>=80)
            grade='B';
        else if(average>=70)
            grade='C';
        else if(average>=60)
            grade='D';
        else
            grade='F';

        cout<<"Average marks = "<<average<<endl<<"Grade = "<<grade<<endl;
        if(average>50)
        {
            if(attendance>MIN_ATTENDANCE)
            {
                cout<<"Status: Promoted"<<endl;
            }
            else
            {
                cout<<"Status: Not promoted"<<endl;
            }
        }
        else
        {
            cout<<"Status: Not promoted"<<endl;
        }
    }
}