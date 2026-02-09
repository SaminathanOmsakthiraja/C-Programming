#include <stdio.h>
int main() {
    int n,paymode;
    scanf("%d",&n);
    scanf("%d",&paymode);
    int amt=0;
    switch (n) {
        case 1:
            amt=199;
            if (paymode==11 || paymode==12) {
                amt-=20;
            }
            break;
        case 2:
            amt=399;
            if (paymode==11 || paymode==12) {
                amt-=20;
            }
            break;
    }
    printf("Pay Rs%d\n",amt);
}
