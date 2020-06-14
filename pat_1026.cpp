#include<iostream>
#include<cmath>
using namespace std;
const int clk_tck  = 100;

void get_TCK(int t1,int t2){
    double tictok = (double)(t2 - t1) / (double)clk_tck;
    int tic = round(tictok);

    int sec = tic % 60;
    int min = ((tic - sec) / 60) % 60;
    int hour = ((tic - sec) / 60 - min) / 60;

    printf("%02d:%02d:%02d",hour,min,sec);
}

int main(){
    int c1,c2;
    cin>>c1>>c2;
    get_TCK(c1,c2);

    return 0;
}
