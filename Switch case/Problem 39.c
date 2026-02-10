#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int m=0;
    if (n<=5)
        m=1;
    else if (n>=6 && n<=10)
        m=2;
    else
        m=3;
    switch(m) {
        case 1:
            printf("Transport Fee Rs%d",800);;break;
        case 2:
            printf("Transport Fee Rs%d",1200);break;
        case 3:
            printf("Transport Fee Rs%d",1800);break;
        }
}
