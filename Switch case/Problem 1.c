#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int amt=0;
    switch (n) {
        case 1:
            if (m<100) {
                amt+=m*3;
                break;
            }
            else if (m>=100) {
                amt+=100*3;
                m-=100;
            }
            amt+=m*5;
            amt-=80;
            break;
        case 2:
            if (m<100) {
                amt+=m*7;
                break;
            }
            else if (m>=100) {
                amt+=100*7;
                m-=100;
            }
            amt+=m*10;break;
    }
    printf("Bill Rs%d\n",amt);
}
