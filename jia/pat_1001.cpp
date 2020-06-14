#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;

    int sum = a + b;
    std::string str = std::to_string(sum);

    int times = 0;
    int n;

    str[0] == '-' ? n = 1 : n = 0;
    for (int i = str.size() - 1; i > n;i--) {
        times++;

        if(times == 3) {
            str.insert(i, ",");
            times = 0;
        }
    }

    std::cout << str;

    return 0;
}
