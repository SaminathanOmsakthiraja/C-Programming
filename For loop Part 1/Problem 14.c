#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    while(n!=0) {
        int m=n%10;
        if (m%2==0) {
            count++;
        }
        n/=10;
    }
    printf("%d",count);
}
