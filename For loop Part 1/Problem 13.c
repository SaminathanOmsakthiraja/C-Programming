#include<stdio.h>
int main() {
    int n,m;
    scanf("%d",&m);
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++) {
        if (i%m==0) {
            sum+=i;
        }
    }
    printf("%d\n",sum);
}
