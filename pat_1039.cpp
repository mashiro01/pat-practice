#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string str1,str2;
    cin >> str1 >> str2;

    transform(str1.begin(),str1.end(),str1.begin(), ::tolower);
    transform(str2.begin(),str2.end(),str2.begin(), ::tolower);

    int pos = 0,len = str2.length();
    for(int i = 0; i < len;i++) {
        if((pos = str1.find(str2[i])) != string::npos) {
            if(i != 0 && str2.length() != 0) {
                i -= 1;
            }
            str2.erase(str2.begin() + i);
            str1.erase(str1.begin() + pos);
        } else {
            continue;
        }
    }

    if(str2 == "") {
        cout << "Yes!" << " " << str1.length();
    } else {
        cout << "No!" << " " << str2.length();
    }

    return 0;
}
