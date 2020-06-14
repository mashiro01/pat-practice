#include <iostream>

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);

    long num_1,num_2,d;
    long sum;
    int ans[1000] = {0}, i = 0;

    cin >> num_1 >> num_2 >> d;

    sum = num_1 + num_2;

    while(sum) {
        ans[i++] = sum % d;
        sum /= d;
    }

    for(int a = i - 1;a >= 0;a--) {
        cout << ans[a];
    }

    return 0;
}
