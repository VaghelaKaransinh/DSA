#include<iostream>
using namespace std;

void details(string name){
    cout<<"hey "<< name <<endl;
}

int main(){
    string name;
    cout<<"Enter the name:";
    cin>>name;
    details(name);
    return 0;
}