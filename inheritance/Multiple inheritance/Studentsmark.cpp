#include<iostream>

using namespace std;

class Studentad
{
    protected:
    int id;
    char name[20];
    public:
    void Studentfirusdeta(){
        cout<<"enter the Student id:";
        cin>>id;
        cout<<"enter the Student name:";
        cin>>name;
    }

};

class Studentad2
{
    protected:
    int hindi,gujarati,english;
    public:
    void Studentfirusdeta2(){
        cout<<"enter the Student hindi mark:";
        cin>>hindi;
        cout<<"enter the Student gujarati mark:";
        cin>>gujarati;
        cout<<"enter the Student english mark:";
        cin>>english;
        cout<<"\n\n";
    }
};



class derived : public Studentad,public Studentad2{
    public:
    int total;
    float per;
    void Studentmarktotal(){
        total=hindi+gujarati+english;
        per=total*100/300;
    }
    void studentalldetainput(){
        cout<<"this Student id:"<<id<<endl;
        cout<<"this Student name:"<<name<<endl;
        cout<<"this Student hindi mark:"<<hindi<<endl;
        cout<<"this Student gujarati mark:"<<gujarati<<endl;
        cout<<"this Student english mark:"<<english<<endl;
        cout<<"this Student mark total:"<<total<<endl;
        cout<<"this Student per:"<<per<<endl;
    }
};

int main(){
    derived add[3];
    for (int i = 1; i <= 3; i++)
    {
        add[i].Studentfirusdeta();
        add[i].Studentfirusdeta2();
        add[i].Studentmarktotal();
        add[i].studentalldetainput();
    }  
    return 0;
}

