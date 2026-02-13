#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    int sum=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        sum+=i;
        if (i>4)count++;
        n--;
    }
    printf("Total Overtime %d\n",sum);
    printf("Burnout Days: %d\n",count);
}
