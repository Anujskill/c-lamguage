#include<iostream>

using  namespace std;

class complax
{

    int x,y;

public:
    complax(int a,int b)
    {
        x=a;
        y=b;
    };

    void displey()
    {
        cout<<"The real part:"<<x<<endl;
        cout<<"The imaginary part:"<<y<<endl;
        
    }

    complax operator++(int)
    {
        x++;
        y++;
    }

};

int main()
{
    complax caa(10,15);
    caa++;
    caa.displey();
    return 0;
}


