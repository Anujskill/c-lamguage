#include<iostream>

using namespace std;

int hindi,gujarati,english;

class base
{
public:
    
    char name[20];
    void studentnamedeta(){
        cout<<"enter the Students name:";
        cin>>name;
    }
    
};

class derive : public base
{
    public:
    
    void studentmarkdeta(){
       cout<<"enter the Students hindi mark:";
        cin>>hindi;
        cout<<"enter the Students gujarati mark:";
        cin>>gujarati;
        cout<<"enter the Students english mark:";
        cin>>english;
        cout<<"\n";
    }
};

class base2
{
public:
    
    int total;
    float pr;
    void studentstotaldeta(){   
        total=hindi+gujarati+english;
        pr=total*100/300;
    }
    
    
};

class derive2 : public base2,public derive
{
    public:
     void input(){
        cout<<"enter the Students name:"<<name<<endl;
        cout<<"enter the Students hindi mark:"<<hindi<<endl;
        cout<<"enter the Students gujarati mark:"<<gujarati<<endl;
        cout<<"enter the Students english mark:"<<english<<endl;
        cout<<"enter the Students total:"<<total<<endl;
        cout<<"enter the Students pr:"<<pr<<endl;

    }
};

int main(){
    derive2 add[3];
    for (int i = 1; i <= 3; i++)
    {
        add[i].studentnamedeta();
        add[i].studentmarkdeta();
        add[i].studentstotaldeta();
        add[i].input();
    }
    
}
