#include<iostream>

using namespace std;

class base
{
    public:
    int a;
    int b;
    void addalldeta(){
        cout<<"enter the a value";
        cin>>a;
        cout<<"enter the b value";
        cin>>b;
    }
};

class derive1 : public base{
    public:
    void sum(){
        cout<<"sum of value"<<a+b<<endl;
    }
};

class derive2 : public base{
    public:
    void maltipal(){
        cout<<"maltipal of value"<<a*b<<endl;
    }
};

int main(){
    derive1 add;
    derive2 add2;
    add.addalldeta();
    add.sum();
    add2.addalldeta();
    add2.maltipal();
}