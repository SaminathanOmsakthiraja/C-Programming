#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for (int i=0 ; i < n; i++) {
        int m;
        scanf("%d",&m);
        sum+=m;
        if (m>1000)
            count++;
    }
    printf("Total Expense:%d\n",sum);
    printf("Overspend Days:%d",count);
}
