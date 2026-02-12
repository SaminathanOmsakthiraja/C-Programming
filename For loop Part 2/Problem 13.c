#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++) {
        int j;
        scanf("%d",&j);
        sum+=j;
        if (j>50)
            count++;
    }
    printf("Total Errors: %d\n",sum);
    printf("Critical Hours: %d",count);
}
