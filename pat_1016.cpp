#include<iostream>
#include<iomanip>

using namespace std;

int getNum(string c,char d){
    string ans="";
    for(auto i : c){
        i == d ? ans += i : ans += "";
    }

    return ans == "" ? 0 : stoi(ans);
}

int main(){
    string DA,DB;
    char a,b;

    cin>>DA>>a>>DB>>b;

    int PA = getNum(DA,a),PB = getNum(DB,b);

    cout<<PA+PB;
    return 0;
}
