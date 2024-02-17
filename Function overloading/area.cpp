#include<iostream>

using namespace std;

void AREA(double pie,int r){
    double b;
    b=pie*r*r;
    cout<<"Circle Area:"<<b<<endl;
}

void AREA(double Square){
    int area;
    area=Square*Square;
    cout<<"Square Area:"<<area<<endl;
}

void AREA(double height,double width){
    int area;
    area=height*width;
    cout<<"Rectangle Area:"<<area<<endl;
}

void AREA(int buse,int width){
    int area;
    area=buse*width;
    cout<<"Triangle Area:"<<area<<endl;
}

int main(){
    AREA(3.14,10);
    AREA(10);
    AREA(20,15);
    AREA(10,25);
}