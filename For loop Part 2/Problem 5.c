#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int sum=0;
    for(int i=0;i<m;i++) {
        int j;
        scanf("%d",&j);
        sum+=j;
    }
    n=n-sum;
    printf("Remaining Battery: %d%%",n);
}
