#include<iostream>

using namespace std;

class besa1{
    protected:
    int a1;
    public:
    void sum1(int x1){
        a1=x1;
    }
};

class besa2{
    protected:
    int a2;
    public:
    void sum2(int x2){
        a2=x2;
    }
};

class derived : public besa1,public besa2{
    public:
    void input(){
        cout<<"this is value 1:"<<a1<<endl;
        cout<<"this is value 2:"<<a2<<endl;
        cout<<"this is value sam:"<<a1+a1<<endl;
    }
};

int main(){
    derived add;
    add.sum1(10);
    add.sum2(12);
    add.input();
    return 0;
}