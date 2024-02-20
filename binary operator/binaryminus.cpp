#include<iostream>

using  namespace std;

class complax
{

    int x,y;

public:
    complax()
    {
        x=0;
        y=0;
    };
    complax(int a,int b)
    {
        x=a;
        y=b;
    };

    void displey()
    {
        cout<<"The real part:"<<x<<endl;
        cout<<"The imaginary part:"<<y<<endl;
        cout<<"The total part:"<<x+y<<endl;
        
    }

    complax operator-(complax c)
    {
        complax temp;
        temp.x=x - c.x;
        temp.y=y - c.y;
        return temp;
    }

};

int main()
{
    complax c1,c2,c3;
    c1 = complax(3,4);
    c2 = complax(5,7);
    cout<<"The first input"<<endl;
    c1.displey();
    cout<<"The second input"<<endl;
    c2.displey();
    cout<<"the output"<<endl;
    c3=c1-c2;
    c3.displey();
    return 0;
}


