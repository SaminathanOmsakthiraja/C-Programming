#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=0 ; i < n; i++) {
        int m;
        scanf("%d",&m);
        sum+=m;
    }
    if (sum>10000)
        printf("Limit Exceeded");
    else
        printf("Approved");
}
