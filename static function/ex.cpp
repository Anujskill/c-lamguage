#include<iostream>

using  namespace std;

class employee{
    public:
    int id;
    static int count;
    void setdata(){
        cout<<"enter the employee id :";
        cin>>id;
        count++;
    }
    void printdata(){
        cout<<"employee id is :"<<id<<endl;
    }

    static void employeecound(){
        cout<<"the count of employee"<<count<<endl;
    }
};

int employee :: count=66;

int main(){
    employee anuj,hiren,deep;

    anuj.setdata();
    anuj.printdata();
    anuj.employeecound();

    hiren.setdata();
    hiren.printdata();
    employee::employeecound();

    deep.setdata();
    deep.printdata();
    employee::employeecound();

    return 0;
}
