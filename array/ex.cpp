#include<iostream>

using  namespace std;

class array
{

    int x,y;

public:
    void addata(){
        cout<<"enter the x valua:";
        cin>>x;
        cout<<"enter the y valua:";
        cin>>y;
    };
    void despley(){
        cout<<"the x valua:"<<x<<endl;
        cout<<"the y valua:"<<y<<endl;
    };
    
};

int main(){
    array c1[3];
    for (int i = 0; i < 3; i++)
    {
        c1[i].addata();
        c1[i].despley();
    }

    return 0;
}
