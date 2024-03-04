#include<iostream>

using  namespace std;

int number;
char name[20];
char type[20];
int choice;
int balance;
int deposit;
int withdraw;


class bank{
    public:
    void bankfirstdeta(){
            cout<<"Enter Customer Name :";
            cin>>name;
            cout<<"Enter Account Number :";
            cin>>number;
            cout<<"Enter Account type :";
            cin>>type;
            cout<<"\n\n";
    }
};



class Account{
    public:
    void opanaccount(){
        cout<<"Enter Your Name :";
        cin>>name;
        cout<<"Enter initil Balance :";
        cin>>balance;   
        cout<<"\n";     
    }
    void opanaccountinput(){
        cout<<"the is Name :"<<name<<endl;
        cout<<"Enter initil Balance :"<<balance<<endl;       
        cout<<"\n\n"; 
    }
};

class Deposit : public Account{
    public:
    void Depositccount(){
        cout<<"Enter amount to Deposit :";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"\n";     
    }
    void Depositccountinput(){
        cout<<"amount to Deposit :"<<deposit<<endl;     
        cout<<"\n\n";   
    }
};

class Withdraw : public Deposit{
    public:
    void Withdrawccount(){
       cout<<"Balance : "<<balance<<endl;
        cout<<"Enter amount to be withdraw :";
        cin>>withdraw;

        balance=balance-withdraw;
        cout<<"Balance Amount After Withdraw: "<<balance<<endl;   
        cout<<"\n\n";
    }
};

class Displey_Balance : public Withdraw{
    public:
    void DispleyBalance(){
       cout<<"Balance : "<<balance<<endl; 
       cout<<"\n\n";
    }
};

class full_Details : public Displey_Balance{
    public:
    void fullDetails(){
        cout<<"Customer Name :"<<name<<endl;
        cout<<"Account Number :"<<number<<endl;
        cout<<"Account type :"<<type<<endl;
        cout<<"Balance : "<<balance; 
        cout<<"\n\n";
    }
};

class loan : public full_Details{
    private:
    int amount;
    float interest;
    int year;
    int si;
    public:
    void loandata(){
        cout<<"Enter Principle Amount :";
        cin>>amount;
        
        if (amount>=500000)
        {
            cout<<"Enter Reta of Interest :";
            cin>>interest;
            cout<<"Enter year :";
            cin>>year;
            si=(amount*interest*year)/100;
            cout<<"Simple Interest Amount :"<<si<<endl;
        }else{
            cout<<"no Giving loan ";
        }        
        cout<<"\n\n";
    }
    
};


int main(){

    bank add;
    loan add2;
    add.bankfirstdeta();

    
    
    
    do
    {
        cout<<"Choose Your Choice"<<endl;
        cout<<"1) Deposit"<<endl;
        cout<<"2) Withdraw"<<endl;
        cout<<"3) Displey Balance"<<endl;
        cout<<"4) Displey With full Details"<<endl;
        cout<<"5) loan"<<endl;
        cout<<"6)exit"<<endl;
        cout<<"\n\n";

        cout<<"Enter Your choice: ";
        cin>>choice;
        switch(choice)
    {
    case 1 :
        add2.Depositccount();
        add2.Depositccountinput();
        break;
    case 2 :
        add2.Withdrawccount();
        break;
    case 3 :
        add2.DispleyBalance();
        break;
    case 4 :
        add2.fullDetails();
        break;
    case 5 :
        add2.loandata();
        break;
    case 6:
        cout<<"thenk you";
    }
    
    } while (choice!=0);
    

    return 0;
}