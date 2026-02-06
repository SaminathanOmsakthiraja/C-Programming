#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int one=0;
    while (n!=0) {
        if (n%2==1) {
            one++;
        }
        n/=2;
    }
    if (one>4) {
        one-=3;
    }
    printf("%d",one);
}
