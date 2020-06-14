#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char h,a[10001];
    int i,e;
    scanf("%c%c.%[0-9]E%d",&h,&a[0],a+1,&e);

    if(h == '-') cout << '-';

    if(e < 0) {
        printf("0.");
        e = -e - 1;

        while(e--) {
            printf("0");
        }
        printf("%s",a);
    } else {
        for(int i = 0;i <= e || a[i] != 0;i++) {
            if(i==e+1) printf(".");
			printf("%c",a[i]==0?'0':a[i]);
        }
    }
}
