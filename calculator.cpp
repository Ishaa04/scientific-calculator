#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,pi=3.14159265;
    int c;
    cout<<"which calculation u want to perform?";
    cout<<"for addition enter 1"<<endl;
    cout<<"for substraction enter 2"<<endl;
    cout<<"for multiplicatin enter 3"<<endl;
    cout<<"for division enter 4"<<endl;
    cout<<"for square enter 5"<<endl;
    cout<<"for exponent enter 6"<<endl;
    cout<<"for square root enter 7"<<endl;
    cout<<"for sin enter 8"<<endl;
    cout<<"for cos enter 9"<<endl;
    cout<<"for tan enter 10"<<endl;
    cout<<"for Log enter 11"<<endl;
    cout<<"for Log with base 10 enter 12"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>c;
    switch(c)
    {
        case 1:
        cout<<"enter value of a and b";
        cin>>a>>b;
        cout<<"Addition is"<<" "<<a+b<<endl;
        break;
        case 2:
        cout<<"enter value of a and b";
        cin>>a>>b;
        cout<<"Substraction is"<<" "<<a-b<<endl;
        break;
        case 3:
        cout<<"enter value of a and b";
        cin>>a>>b;
        cout<<"Multiplication is"<<" "<<a*b<<endl;
        break;
        case 4:
        cout<<"enter value of a and b";
        cin>>a>>b;
        cout<<"division is"<<" "<<a/b<<endl;
        break;
        case 5:
        cout<<"enter the number";
        cin>>a;
        cout<<"Square is"<<" "<<a*a<<endl;
        break;
        case 6:
        cout<<"Enter the exponent"<<endl;
        cin>>a;
        cout<<"Enter the number";
        cin>>b;
        cout<<"Exponent is"<<" "<<pow(a,b)<<endl;
        break;
        case 7:
        cout<<"Enter the number";
        cin>>a;
        cout<<"Square Root is"<<" "<<sqrt(a)<<endl;
        break;
        case 8:
        cout<<"Enter the number ";
        cin>>a;
        cout<<"Sin is"<<" "<<sin(a)<<endl;
        break;
        case 9:
        cout<<"Enter the number";
        cin>>a;
        cout<<"Cos is"<<" "<<cos(a)<<endl;
        break;
        case 10:
        cout<<"Enter the number";
        cin>>a;
        cout<<"Tan is "<<" "<<tan(a)<<endl;
        break;
        case 11:
        cout<<"enter the number";
        cin>>a;
        cout<<"Log is"<<" "<<log(a)<<endl;
        break;
        case 12: 
        cout<<"enter the number "; 
        cin>>a; 
        cout<<"Log with base 10 is "<<" "<<log10(a)<<endl; 
        break; 
        default: 
        cout<<"Wrong Input , Please enter correct input."<<endl; 


    }
 return 0;

}