#include <stdio.h>
int main() {
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);
    if ((n+m+p)==180) {
        printf("Valid triangle");
    }
    else {
        printf("Not valid triangle");
    }
}
