#include <iostream>
#include <cstring>
#include <map>

using namespace std;

int main() {
    string str1,str2;
    map<char,int> m;

    cin >> str1 >> str2;
    for(char i : str1) {
        if(i >= 'a' && i <= 'z') {
            i -=32;
        }
        m[i] = 0;
    }
    for(char i : str2) {
        if(i >= 'a' && i <= 'z'){
            i -= 32;
        }
        m[i]++;
    }

    map<char,int>::iterator it = m.begin();

    while(it != m.end()) {
        if(it -> second == 0){
            cout<<it -> first;
        }
        it++;
        //cout << it -> first << " " << it -> second<<std::endl;
    }

    return 0;
}
