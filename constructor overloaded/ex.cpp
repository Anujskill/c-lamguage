#include<iostream>

using namespace std;

class ex
{

    int a,b;
    
public:
    ex(int a1,int a2){
        a=a1;
        b=a2;
    };
    ex(int a1,int a2,int a3){
        a=a1;
        b=a2;
        b=a3;
    };
    void displaydata() {
        cout<<a<<""<<b<<endl;
    };
};

int main(){
    ex e(10,20);
    e.displaydata();
    ex e1(10,20,50);
    e1.displaydata();
    return 0;
}



