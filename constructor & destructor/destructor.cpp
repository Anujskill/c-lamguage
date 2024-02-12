#include<iostream>

using namespace std;

class destructor
{
private:
    int admno;
    char sname[20];
    float  eng, math, science;
    float total;

    float ctotal(){
        total=eng+math+science;
        return total;
    }
public:
    ~destructor();
    void Takedata(){
        cout<<"\n\nthis is admno"<<admno<<endl;
        cout<<"this is sname"<<sname<<endl;
        cout<<"this is mark eng"<<eng<<endl;
        cout<<"this is mark math"<<math<<endl;
        cout<<"this is mark science"<<science<<endl;
        cout<<"this is total"<<total<<endl;
    };
};

destructor::~destructor()
{
        cout<<"enter the admno:";
        cin>>  admno;
        cout<<"enter the sname:";
        cin>>sname;
        cout<< "enter the mark eng:" ;
        cin>>eng;
        cout<< "enter the mark math:";
        cin>>math;
        cout<< "enter the mark science:";
        cin>>science;
        total=ctotal();
        cout<<"total";
        cout<< total;

}

int main(){
    
    destructor destructor;
    destructor.Takedata();

}
