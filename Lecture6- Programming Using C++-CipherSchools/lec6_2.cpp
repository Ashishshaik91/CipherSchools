#include<iostream>
using namespace std;

int main ()
{
    int marks;
    cout<<"Enter the Value of Marks: ";
    cin>>marks; //int input of marks
    
    if(marks > 90) //conditional statments for the grades display based on input.
    {
        cout<<"A grade";
    }
    else if(marks >80)
    {
        cout<<"B grade";
    }
    else if(marks >70)
    {
        cout<<"C Grade";
    }
    else 
    {
        cout<<"pass";
    }
}