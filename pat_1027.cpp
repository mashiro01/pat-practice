#include<iostream>
using namespace std;
int sum = 0;
int main(){
    int times;
    char char_set;

    cin>>times;

    int ceng = 0;
    for(int i = 3;sum <= (times - 1)/2;i = i*2 -1){
        sum += i;
        ceng++;
    }
    cout<<ceng;

    return 0;
}

