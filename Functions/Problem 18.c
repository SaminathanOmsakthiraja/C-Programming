#include <stdio.h>
int GCD(int a, int b) {
    while (a!=b) {
        if (a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int gcd=GCD(a,b);
    printf("%d\n",gcd);
}   
