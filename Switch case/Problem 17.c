#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int ch=0;
    switch (n) {
        case 1:
            ch+=m*10;
            break;
        case 2:
            ch+=m*20;
            break;
        default:
            ch+=m*20;
    }
    printf("Parking Fee Rs%d\n",ch);
}
