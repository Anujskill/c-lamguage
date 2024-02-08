#include<iostream>

using namespace std;

class Distancefuel 
{
private:
    int numberl;
    char Destination[20];
    float Distance;
    float fuel;

    void CALFUEL(){
        if(Distance<=1000){
            fuel = 500 * Distance/1000;
        }else if(Distance<=2000){
            fuel = 1100 * Distance/1000;
        }else{
            fuel = 2200 * Distance/1000;
        }
    };

public:
    void FEEDINFO(){
        cout<<"enter the numberl:";
        cin>>numberl;
        cout<<"enter the Destination:";
        cin>>Destination;
        cout<<"enter the Distance:";
        cin>>Distance;
        CALFUEL();
        cout << "fuel";
        cout << fuel;

    };
    void SHOWINFO(){
        cout<<"\n\nthe is numberl:"<<numberl<<endl;
        cout<<"the is Destination:"<<Destination<<endl;
        cout<<"the is Distance:"<<Distance<<endl;
        cout<<"the is fuel:"<<fuel<<endl;
    }
};

int main(){
    Distancefuel input;
    input.FEEDINFO();
    input.SHOWINFO();
}


