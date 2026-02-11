#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<=0)
        printf("Invalid input");
    else if (n==1)
        printf("0 1");
    else {
        int i=0;
        int j=1;
        printf("%d %d",i,j);
        for (int a=2;a<n;a++) {
            int b=i+j;
            i=j;
            j=b;
            printf(" %d",b);
        }

    }
}
