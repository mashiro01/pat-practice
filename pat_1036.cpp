#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n; char a;
    cin >> n >> a;

    for(int i = 0;i < (n+1)/2;i++) {
        for(int j = 0;j< n;j++) {
            if(i == 0 || i == (n -1)/2 || j == 0 || j == (n-1)) {
                putchar(a);
            } else {
                putchar(' ');
            }
        }
        cout<<endl;
    }

    return 0;
}
