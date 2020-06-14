#include <iostream>
#include <cstring>
#include <map>

using namespace std;
const int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const map<int,char> m = {
    {0,'1'},{1,'0'},{2,'X'},{3,'9'},{4,'8'},{5,'6'},{6,'6'},{7,'5'},{8,'4'},{9,'3'},{10,'2'}
};

int main() {
    int n,sum = 0;
    string str;
    bool is_correct_char = true,is_correct_end= true;

    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        cin >> str;
        for(int i = 0;i < str.length() - 1;i++) {
            if(str.at(i) > '0' && str.at(i) < '9'){
                sum += (str.at(i) - '0') * weight[i];
            } else {
                is_correct_char = false;
                break;
            }
        }

        if(m.find( sum % 11) -> second != str.at(17) && is_correct_char == false) {
            is_correct_end = false;
            cout << str << std::endl;
        }
    }

    if(is_correct_char && is_correct_end) {
        printf("%s","All passed");
    }
    return 0;
}
