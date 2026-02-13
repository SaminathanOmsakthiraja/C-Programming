#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        sum=sum+i;
        if (i>2)
            count++;
        n--;
    }
    printf("Total Delays: %d\n",sum);
    printf("Delayed Days: %d",count);
}
