#include<iostream>

using namespace std;
char aa[2] = {'s','b'};


int main(){
    int a;
    cin>>a;

    for(int i = 0; i < a/100;i++){
        cout<<"B";
    }
    for(int i = 0; i < a%100 /10;i++){
        cout<<"S";
    }
    for(int i = 0; i < (a%100)%10;i++){
        cout<<i+1;
    }

    return 0;
}
