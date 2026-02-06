#include <stdio.h>
int main() {
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);
    if (n>m&&n>p) {
        printf("%d is largest",n);
    }
    else if (m>n&&m>p) {
        printf("%d is largest",m);
    }
    else if (p>n&&p>m) {
        printf("%d is largest",p);
    }
}
