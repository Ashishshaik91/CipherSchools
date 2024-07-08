#include<iostream>
using namespace std;

int main ()
{
    int test;
    cout<<"Enter a test case value: ";
    cin>>test;
    switch (test) //need to take the input varibale in it.
    {
        case 1: // case "value" might differ based on data types.
            cout<<"its a apple!";
            break;
        case 2: //for int no need of colon.
            cout<<"its a banana!";
            break;
        case 3: //for a char type we need to write a colon ex: case'a'.
            cout<<"its a melon!";
            break;
        default:
            cout<<"Umm,Error 404??";
            break;
    }
    return 0;
}