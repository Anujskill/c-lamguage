#include<iostream>

using namespace std;

class book
{
private:
    int BOOKNO;
    char  BOOKTITLE;
    float PRICE,cost;

    void  TOTAL_COST(int n){
        cost=n*PRICE;
    }

public:
    void INPUT(){
        cout<<"enter the number:";
        cin>>BOOKNO;
        cout<<"enter the BOOK TITLE:";
        cin>>BOOKTITLE;
        cout<<"enter the BOOK PRICE:";
        cin>>PRICE;
    };
    void PURCHASE(){
        int n;

        cout<<"enter the number of book";
        cin>>n;

        cout<<"total codt is";
        TOTAL_COST(n);
        cout<<cost;
    };
};

int main(){

    book input;

    input.INPUT();
    input.PURCHASE();

}