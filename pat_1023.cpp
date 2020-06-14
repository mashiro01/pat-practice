#include <iostream>

using namespace std;

int main() {
    int a[10] = {0};

    for (int i = 0;i < 10;i++) {
        cin >> a[i];
    }

    if(a[0] == 0) {
        for (int i = 1;i < 10;i++) {
            while(a[i]-- > 0) {
                cout << i;
            }
        }
    } else {
        bool is_zero = false;
        for (int i = 1;i < 10;i++) {
            if(a[i] != 0 && !is_zero) {
                cout << i; a[i]--;
                while(a[0]-- > 0) {
                    cout << 0;
                }
                while(a[i]-- > 0) {
                    cout << i;
                }
                is_zero = true;
            } else {
                while(a[i]-- > 0) {
                    cout << i;
                }
            }
        }
    }

    return 0;
}
