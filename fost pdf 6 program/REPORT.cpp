#include<iostream>

using namespace std;

class REPORT
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average=0;

    void GETAVG(){
        for (int i = 0; i < 5; i++)
        {
            average=average+marks[i];
        }
        average=average*100/500;
    }
public:
    void READINFO(){
        cout<<"enter the adno:";
        cin>>adno;
        cout<<"enter the name:";
        cin>>name;
        for (int i = 0; i < 5; i++)
        {
            cout<<"enter the mark od subject"<<i+1<<":";
            cin>>marks[i];
        }
        GETAVG();
    };
    void DISPLAYINFO(){
        cout<<"\n\nDisplay info"<<endl;
        cout<<"Admin no:"<<endl;
        cout<<"name:"<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<"marks of subject"<<marks[i]<<endl;
        }
        cout<<"Average Marks"<<average<<endl;
    };
};

int main(){
    REPORT input;

    input.READINFO();
    input.DISPLAYINFO();
    return 0;
}
