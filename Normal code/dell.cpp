#include <iostream>

using namespace std;

int main(){
    
    int rate,qty;
    
    cin>>rate>>qty;

    int amt = rate*qty;
    int dis = amt*5/100;
    int billamt = amt - dis;
    int gst =  billamt*18/100;
    int netbill = gst + billamt;

    cout<<"rate\tqty\tamt\tdis5%\tbillamt\tgst\tnetbill\n\n";

    cout<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill<<"\t";
}