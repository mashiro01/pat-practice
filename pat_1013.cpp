#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int prime[10001];
    bool is_prime[10001] = {true};

    for(auto &i : is_prime){
        i = true;
    }

    int count = 0,i=2,line=0;
    while(count != n){
        if(is_prime[i]){
            for(int j=2*i;j<=10000;j+=i){
                is_prime[j] =false;
            }
            count++;
            if(count >= m && count <= n){
                if(line != 10 && count != n){
                    cout<<i<<" ";
                    line++;
                }else{
                    if(line == 10 && count != n){
                        cout<<endl<<i<<" ";
                        line = 1;
                    }else{
                        if(count == n){
                            cout<<i;
                        }
                    }
                }
            }
        }
        i++;
    }

    return 0;
}
