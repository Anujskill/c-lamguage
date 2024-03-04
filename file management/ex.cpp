#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string st ="skill 3 to 5";
    string st2;
    // ofstream out("sempl.txt");
    // out<<st;

    ifstream in("sempl.txt");
    getline(in,st2);
    cout<<st2;
}