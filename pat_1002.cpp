#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    int count =0;
    string pinyin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

    cin>>str;
    for(auto i : str)
    {
        i = i - '0';
        count+=i;
    }
    string aa;
    aa = std::to_string(count);

    int temp = 0;
    for(auto i : aa)
    {
        if(temp != aa.length()-1)
        {
            cout<<pinyin[i-'0']<<" ";
            temp++;
        }
        else
        {
            cout<<pinyin[i-'0'];
        }
    }
    return 0;
}