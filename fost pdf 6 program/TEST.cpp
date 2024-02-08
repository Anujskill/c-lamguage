#include<iostream>

using namespace std;

class TEST
{
private:
    int TestCode;
    char Description[20];
    int  NoCandidates;
    int CenterReqd=0;

    int CALCNTR(){
        CenterReqd=(NoCandidates/100+1);
        return CenterReqd;
    }

public:
    void SCHEDULE(){
        cout<<"enter the TestCode:";
        cin>>TestCode;

        cout<<"enter the Description:";
        cin>>Description;


        cout<<"enter the NoCandidate:";
        cin>>NoCandidates;

        CenterReqd=CALCNTR();
        cout<<"CenterReqd:";
        cout<<CenterReqd;

    };
    void DISPTEST(){
        cout<<"\n\nthe is TestCode:"<<TestCode<<endl;
        cout<<"the is Description:"<<Description<<endl;
        cout<<"the is NoCandidate:"<<NoCandidates<<endl;
        cout<<"the is CenterReqd:"<<CenterReqd<<endl;
    };
};

int main(){

    TEST input;

    input.SCHEDULE();
    input.DISPTEST();

}
