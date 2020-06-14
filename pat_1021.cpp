#include<iostream>

using namespace std;

int main(){
    string num;
    int a[10] = {0};
    cin>>num;

    for(auto i : num){
        a[i - '0']++;
    }

    for(int i = 0;i <= 9;i++){
        if(a[i] != 0){
            printf("%d:%d\n",i,a[i]);
        }
    }

    return 0;
}
