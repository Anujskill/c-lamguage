#include<iostream>

using namespace std;

class base
{

public:

    int hindi,gujarati,english,total;
    char name[20];
    float pr;

    void studentsmark(){
        cout<<"enter the Students name:";
        cin>>name;
        cout<<"enter the Students hindi mark:";
        cin>>hindi;
        cout<<"enter the Students gujarati mark:";
        cin>>gujarati;
        cout<<"enter the Students english mark:";
        cin>>english;
        cout<<"\n";
    }

    void input(){
        cout<<"enter the Students name:"<<name<<endl;
        cout<<"enter the Students hindi mark:"<<hindi<<endl;
        cout<<"enter the Students gujarati mark:"<<gujarati<<endl;
        cout<<"enter the Students english mark:"<<english<<endl;
        
    }
    
};

class derive : public base
{
    public:

    void studentstotaldeta(){
        total=hindi+gujarati+english;
        pr=total*100/300;
    }

    
};

int main(){

    derive add[3];
    for(int i=0;i<3;i++){
        add[i].studentsmark();
    }
    for(int i=0;i<3;i++){
        add[i].studentstotaldeta();
    }
    for(int i=0;i<3;i++){
        add[i].input();
        cout<<"this is Students total mark"<<add[i].total<<endl;
        cout<<"this is Students pr"<<add[i].pr<<endl;
        cout<<"\n\n";
    }
    
    return 0;
}
