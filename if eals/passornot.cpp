#include <iostream>

using namespace std;

int main(){

    int maths,english,gujarati,total;
	float per;

    cout<<"enter marks of 3 sudject:";
    cin>>maths;
    cin>>english;
    cin>>gujarati;

    total=maths+english+gujarati;

    cout<<"total marks of Students is =";
    cout<<total;

    if(maths>=36&&english>=36&&gujarati>=36){	
        cout<<"student is pass";
		per=total/3;
        cout<<"\n percntage of a student=";
        cout<<per;
	}else{
        cout<<"\n student if fuil";
	}

}