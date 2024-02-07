#include<iostream>

using namespace std;

class Defineaclassstudent
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
    void Takedata(){
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
    };
};

int main(){
    Defineaclassstudent student;
    student.Takedata();
}
