#include<iostream>
#include<vector>

using namespace std;

vector<string> split(string str,string pattern)
{
  string::size_type pos;
  vector<string> result;
  str+=pattern;//扩展字符串以方便操作
  int size=str.size();

  for(int i=0; i<size; i++)
  {
    pos=str.find(pattern,i);
    if(pos<size)
    {
      string s=str.substr(i,pos-i);
      result.push_back(s);
      i=pos+pattern.size()-1;
    }
  }
  return result;
}

int main(){
    string str1;
    getline(cin,str1);
    auto str2 = split(str1," ");

    for(auto i = end(str2)-1; i != begin(str2)-1; i--){
        if(i >= begin(str2)+1){
            cout<<*i<<" ";
        }else{
            cout<<*i;
        }
    }

    return 0;
}
