#include <iostream>
using namespace std;

int main()
{
    int n=50,num,a=1;
    cout<<"Number Guessing Game"<<endl;
    while(a)
    {
        cout<<"Guess a number: ";
        cin>>num;
        if(num==n)
        {
            cout<<"Congrats! You guessed the number\n"<<endl;
            a=0;
        }
        else
        {
            cout<<"Try again!\n";
        }
    }
    
}
