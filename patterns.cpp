#include<iostream>
using namespace std;
/*
1.
* 
* *
* * *
* * * *
* * * * *
*/
void pattern1(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }   
}

/*
1
12
123
1234
12345
*/
void pattern2(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            cout<<j<< " ";
        }
        cout<<endl;
    } 
}

/*
*****
****
***
**
*
*/
void pattern3(int n){
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    } 
}

/*
12345
1234
123
12
1
*/
void pattern4(int n){
    for (int i = 5; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } 
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    pattern4(n);
}