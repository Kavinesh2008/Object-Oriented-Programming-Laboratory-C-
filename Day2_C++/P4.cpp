#include <iostream>
#include <iomanip>
#include <cmath>
#define BMI_UNDER 18.5
#define BMI_NORMAL 24.9
#define BMI_OBESE 30.0
using namespace std;

int main()
{
    double weight,height;
    int age;
    char gender;
    double BMI;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter gender(M/F): ";
    cin>>gender;
    cout<<"Enter weight and height: ";
    cin>>weight>>height;
    BMI=(weight)/pow(height,2);
    cout<<"BMI = "<<fixed<<setprecision(2)<<BMI<<endl;
    if(BMI<BMI_UNDER)
    cout<<"Underweight"<<endl;
    else if(BMI>=BMI_UNDER && BMI<=BMI_NORMAL)
    cout<<"Normal weight"<<endl;
    else if(BMI>BMI_NORMAL && BMI<BMI_OBESE)
    cout<<"Overweight";
    else
    cout<<"Obese";
}