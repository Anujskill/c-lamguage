#include<iostream>

using namespace std;

class deploy
{
    int a,b;
public:
    deploy();
    void printdutu(){
        cout<<a<<""<<b<<endl;
    };
};

deploy::deploy(/* args */)
{
    a=10;
    b=20;
}

int main(){
    
    deploy deploy;
    deploy.printdutu();
    return 0;
}
