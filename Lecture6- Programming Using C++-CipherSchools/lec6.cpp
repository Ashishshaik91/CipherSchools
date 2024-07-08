#include<iostream>
using namespace std;

int main () {
    float a,b;
    cout<<"Enter two float values: ";//using multiple testcases for variation in outcome.
    cin>>a,b;
    if(a>0.01 && b>a)//using multiple LOGICAL operations for each run.
    {
        cout<<"The condition is true!";
    }
    else
    {
        cout<<"The condition is false.";
    }
}