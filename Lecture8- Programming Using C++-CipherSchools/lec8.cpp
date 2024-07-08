#include<iostream>
using namespace std;

int main ()
{   
    int a[10],i; //changed the a[i] value when going for commented section of code.

    cout<<"Give 5 integers as input: ";
    for(i=0;i<5;i++) //no need of bracket if the line of code involes only one line of code in the loop.
    cin>>a[i];

    cout<<"The given array is ";
    for(i=0;i<5;i++) //prints the array stored from index 0 to 4.
    cout<<a[i]<<" ";

    /*cout<<"give 10 integers as input: ";
    for(i=0;i<10;i++)
    cin>>a[i];
    
    for(i=9;i>=0;i--)
    cout<<a[i]<<" "; */

    return 0;

}