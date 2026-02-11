#include<stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int a=n;
    if (m==0) {
        printf("1");
    }
    else {
        for (int i=0;i<n;i++) {
            a*=n;
        }
        printf("%d",a);
    }
}
