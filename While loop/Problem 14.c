#include<stdio.h>
int main() {
    int cash;
    scanf("%d",&cash);
    int n;
    scanf("%d",&n);
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        cash-=i;
        if (cash<0) {
            cash+=i;
            break;
        }
        count++;
        n--;
    }
    printf("Successful Withdrawals: %d\n",count);
    printf("Remaining Cash: %d\n",cash);
}
