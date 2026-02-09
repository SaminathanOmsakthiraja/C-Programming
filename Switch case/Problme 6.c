#include <stdio.h>
int main() {
    int amt,n;
    scanf("%d",&amt);
    scanf("%d",&n);
    int del=0;
    switch (n) {
        case 1:
            del=50;
            break;
        case 2:
            if (amt<1000) {
                del=100;
            }
            else if (amt>=1000) {
                del=0;
            }
            break;
    }
    printf("Delivery Rs%d\n",del);
}
