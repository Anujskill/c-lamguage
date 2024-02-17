#include<iostream>

using namespace std;

class exdestructor
{
    int a,b;

public:
    
    ~exdestructor(int a1){
        a=a1;
    };
    void displaydata() {
        cout<<a<<""<<b<<endl;
    };
};

int main(){
    exdestructor e(10);
    e.displaydata();
    return 0;
}
