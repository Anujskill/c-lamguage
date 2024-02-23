#include<iostream>

using  namespace std;

class array
{ 

    int id,hindi,gujarati,english,total;
    char name[20];
    float pr;

public:
    void addata(){
        cout<<"enter the Students id:";
        cin>>id;
        cout<<"enter the Students name:";
        cin>>name;
        cout<<"enter the Students hindi mark:";
        cin>>hindi;
        cout<<"enter the Students gujarati mark:";
        cin>>gujarati;
        cout<<"enter the Students english mark:";
        cin>>english;
        total=hindi+gujarati+english;
        cout<<"this is total:"<<total<<endl;
        pr=total*100/300;
        cout<<"this is pr:"<<pr<<"\n"<<endl;
        

    };
    void despley(){
        cout<<"the Students id:"<<id<<endl;
        cout<<"the Students name:"<<name<<endl;
        cout<<"the Students hindi mark:"<<hindi<<endl;
        cout<<"the Students gujarati mark:"<<gujarati<<endl;
        cout<<"the Students english mark:"<<english<<endl;
        cout<<"this is total:"<<total<<endl;
        cout<<"this is pr:"<<pr<<"\n"<<endl;
    };
    
};

int main(){
    array c1[3];
    for (int i = 0; i < 3; i++)
    {
        c1[i].addata();
        
    }
    for (int i = 0; i < 3; i++)
    {
        c1[i].despley();
    }
    

    return 0;
}
