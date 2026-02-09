#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int bill=0;
    switch (n) {
        case 1:
            if (m<30) {
                bill+=m*5;
                m=0;
            }
            if (m>=30) {
                bill+=m*5;
                m-=30;
            }
            bill+=m*8;
            break;
        case 2:
            bill+=m*10;
    }
    printf("Bill Rs%d\n",bill);
}
