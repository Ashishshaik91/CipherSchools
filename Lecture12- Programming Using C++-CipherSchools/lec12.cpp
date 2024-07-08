#include<iostream>
using namespace std;

int main ()
{
    int password;
    do //the do while condition code
    {
        cout<<"Enter a password: ";
        cin>>password;
    }
    while(password<999999);
    cout<<"This is a correct format.";

    //sample code
    /*int password;
    cout<<"Enter your password: ";
    cin>>password;
    while(password<999999)
    {
        cout<<"Password does not matches the password format!"<<"\n";
        cin>>password;
    }
    cout<<"The Password format is Correct!";*/

    return 0;
}