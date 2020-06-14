#include<iostream>

using namespace std;

int main() {
    int n,a[101][4] = {0};
    cin >> n;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < 4;j++) {
            cin >> a[i][j];
        }
    }

    int countJ = 0,countY = 0;
    for(int i = 0;i < n;i++){
        if(a[i][0] + a[i][2] == a[i][1] && a[i][0] + a[i][2] == a[i][3]) {
            continue;
        } else{
            if(!(a[i][0] + a[i][2] != a[i][1] && a[i][0] + a[i][2] != a[i][3]))  {
                (a[i][0] + a[i][2] == a[i][1] ) ? countY++ : countJ++;
            }
        }
    }

    cout<<countJ<<" "<<countY;
}
