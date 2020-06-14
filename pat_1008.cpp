#include<iostream>
#include<deque>

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);

    int lenA,movLen;
    cin>>lenA>>movLen;

    int temp;
    deque<int> deq;
    for(int i=0; i<lenA;i++){
        cin>>temp;
        deq.push_back(temp);
    }

    for(int i = 0; i<movLen;i++){
        temp = *(deq.end()-1);
        deq.pop_back();
        deq.push_front(temp);
    }

    for(auto i : deq){
        if(i != *(deq.end()-1)){
            cout<<i<<" ";
        }
        else{
            cout<<i;
        }
    }
}
