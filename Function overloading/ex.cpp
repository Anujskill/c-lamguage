#include<iostream>

using namespace std;

void sam(int a,int b){
    cout<<a+b;
}

void sam(double a,int b){
    cout<<a+b;
}

int main(){
    sam(10,20);
    sam(10.0,30);
    return 0;
}