#include<iostream>
#include<vector>

using namespace std;

struct ss
{   
    unsigned long long uuid;
    int sw;
    int kw;
};


int main() {
    cin.sync_with_stdio(false);


    ss stu[1001];
    int n,ns,b;
    long long uuuid,ssw,kkw;
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >>uuuid>>ssw>>kkw;
        stu[ssw].uuid = uuuid;
        stu[ssw].kw = kkw;
    }
    cin >> ns;
    for(int i = 0;i < ns;i++) {
        cin >> b;
        cout << stu[b].uuid<< " " <<stu[b].kw<<endl;
    }

}
