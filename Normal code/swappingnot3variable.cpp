#include <iostream>

using namespace std;

int main(){

    int a,b;

    cout<<"enter the A value:";
    cin>>a;

    cout<<"enter the B value:";
    cin>>b;

    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"enter the A value:";
    cout<<a;

    cout<<"enter the B value:";
    cout<<b;
}