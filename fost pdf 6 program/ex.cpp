#include<iostream>

using namespace std;

class demo
{
private:
    int c,d;
public:

    int a,b;
    void showint(int c1,int d2);
    void name(){
        cout<< a <<endl;
        cout<< b <<endl;
        cout<< c <<endl;
        cout<< d <<endl;
    };
};

void demo::showint(int c1,int d1)
{
    c=c1;
    d=d1;
}

int main(){
    demo demoinput;

     demoinput.a=10;
     demoinput.b=20;
     demoinput.showint(30,40);
     demoinput.name();
     return 0;
}