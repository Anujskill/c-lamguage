#include <iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"enter the A value:";
    cin>>a;

    cout<<"enter the B value:";
    cin>>b;

    c=a;
    a=b;

    b=c;
    cout<<"enter the A value:";
    cout<<a;

    cout<<"enter the B value:";
    cout<<b;
}