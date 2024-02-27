#include<iostream>

using namespace std;

class Studentad{
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
    void Studentfirusdetainput(){
        cout<<"the Student id:"<<id<<endl;
        cout<<"the Student name:"<<name<<endl;
    }
};

class Studentad2: public Studentad{
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
    void Studentfirusdetainput2(){
        cout<<"the Student hindi mark:"<<hindi<<endl;
        cout<<"the Student gujarati mark:"<<gujarati<<endl;
        cout<<"the Student english mark:"<<english<<endl;
    }
};

class derived : public Studentad2{
     public:
    int total;
    float per;
    void Studentmarktotal(){
        total=hindi+gujarati+english;
        per=total*100/300;
    }
    void Studentmarktotalinput(){
        cout<<"the Student total mark:"<<total<<endl;
        cout<<"the Student per:"<<per<<endl;
    }
};

int main(){
    
    derived add[3];
        for (int i = 1; i <= 3; i++)
        {
        add[i].Studentfirusdeta();
        add[i].Studentfirusdeta2();
        add[i].Studentfirusdetainput();
        add[i].Studentfirusdetainput2();
        add[i].Studentmarktotal();
        add[i].Studentmarktotalinput();
    }
    
}


