#include <iostream>

using namespace std;

int main(){

    int a,b,c;

    cout<<"enter the first value:";
    cin>>a;

    cout<<"enter the first value:";
    cin>>b;

    cout<<"enter the first value:";
    cin>>c;


    if(a>b){
		if(a>c){
            cout<<a;
		}else{
			if(c>b){
                cout<<c;
			}
		}
	}

}