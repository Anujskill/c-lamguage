#include<iostream>

using namespace std;

class batsman
{
private:
     int code4digits;
   char bname[20];
   int innings,notout,runs;

    void calcavg(){
        int batavg =runs/(innings-notout);
        cout<<"batavg:";
        cout<<batavg;
    };
public:

    batsman();
    void readdata(){
         cout<<"\n\nthis is 4 digits code"<<code4digits<<endl;
        cout<<"this is name:"<<bname<<endl;
        cout<<"this is innings:"<<innings<<endl;
        cout<<"this is notout:"<<notout<<endl;
        cout<<"this is runs:"<<runs<<endl;
        calcavg();
        
    };
    
};

batsman::batsman()
{
    cout<<"enter the 4 digits code:";
        cin>>code4digits;

        cout<<"enter the name:";
        cin>>bname;

        cout<<"enter the innings:";
        cin>>innings;

        cout<<"enter the notout:";
        cin>>notout;

        cout<<"enter the runs:";
        cin>>runs;
}




int main(){

     batsman batsman;
     batsman.readdata();

}