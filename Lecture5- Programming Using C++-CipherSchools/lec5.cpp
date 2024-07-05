#include<iostream>
using namespace std;

int main () {
    int a,b,c,d;
    cout<<"Please enter 4 integer inputs \n";
    cin>>a>>b>>c>>d; //will take multiple testcases to perform AND OR operations.
    cout<<(a>b && c>d);
    cout<<(b>a && d>c);
    cout<<(a<b && c<d);
    cout<<(b<a && d<c);

    //Above is the testcase for AND operations done on a set of input

    cout<<endl;

    cout<<(a>b || c>d);
    cout<<(b>a || d>c);
    cout<<(a<b || c<d);
    cout<<(b>a || d<c);

    //Above is the testcase for OR operations done on a set of input

    cout<<endl;

    return 0;
}