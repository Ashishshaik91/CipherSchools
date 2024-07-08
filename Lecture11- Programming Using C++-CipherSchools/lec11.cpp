#include<iostream>
using namespace std;

int main ()
{   
    //simple while loop code

    /*int i;
    i=1;
    while(i<101)
    {
        cout<<i<<" ";
        i++;
    }*/

    int i,input; //initlizaling i
    i=100;
    cin>>input;
    for(i=1;i<101;i++)
    {
        cin>>input;
        if(input==96)
        {
            cout<<"Guessed the correct number!";
            break; //used to stop the loop condition to go any further
        }
    }
    return 0;
}