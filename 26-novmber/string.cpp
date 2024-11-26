#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char pwd[20];
    cout<<"enter pwd\n";
    cin>>pwd;
    if(strrev(pwd)==pwd)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";

    }
    }