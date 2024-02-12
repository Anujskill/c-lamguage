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
    ex(int a1){
        a=a1;
        b=0;
    };
    void displaydata() {
        cout<<a<<""<<b<<endl;
    };
};

int main(){
    ex e(10,20);
    e.displaydata();
    ex e1(10);
    e1.displaydata();
    return 0;
}



