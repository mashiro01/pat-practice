#include <iostream>
#include <map>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    map<char,int> m;
    string str;

    getline(cin,str);

    for(int i = 0;i < str.length();i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }

        if(str[i] >= 'a' && str[i] <= 'z') {
            m[str[i]]++;
        }
    }

    std::map<char,int>::iterator iter = m.begin();
    std::map<char,int>::iterator iter_max = m.begin();

    while(iter++ != m.end()) {
        if(iter -> second > iter_max -> second) {
            iter_max = iter;
        } else if(iter -> second == iter_max -> second && iter -> first < iter_max -> first) {
            iter_max = iter;
        }
    }

    cout << iter_max -> first << " " << iter_max -> second;
}
