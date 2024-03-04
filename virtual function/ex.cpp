#include<iostream>

using  namespace std;

class base{
    public:
    int a=10;
    virtual void sodata()=0; 
};

class derive : public base{
    void sodata(){
        cout<<"this is value of a :"<<a;
    }
};

int main(){
    base *a;
    derive b;
    a=&b;
    a->sodata();

    return 0;
}