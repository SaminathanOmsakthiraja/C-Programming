#include<stdio.h>
int main() {
    int tot;
    scanf("%d",&tot);
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0) {
        int i;
        scanf("%d",&i);
        tot-=i;
        if (tot>=0)
            count++;
        if (tot<=0)
            break;
        n--;
    }
    printf("\nDays Used: %d\n",count);
    printf("Remaining Data: %dGB",tot);
}
