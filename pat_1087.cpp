#include <iostream>

using namespace std;

int main() {
    int N, sum = 0,count = 0,max = -1;
    cin >> N;

    for (int i = 1;i <= N;i++) {
        sum = i / 2 + i / 3 + i /5;
        if(sum > max) {
            count++;
            max = sum;
        }

    }

    cout << count;
    return 0;
}
