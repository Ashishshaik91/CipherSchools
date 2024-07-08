#include<iostream>
using namespace std;
int main ()
{
    int i;
    for(i=0;  ;i++)
    {
        cout<<i<<" "; //that's why it also prints 101.
        if(i>100) break; //It is executed when i is already at value 101.
    }

    /*int count=0;
    while(1)
    {
        cout<<"Test";
        count++;

        if(count>100) break;
    }*/

    return 0;
}