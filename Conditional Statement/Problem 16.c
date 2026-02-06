#include <stdio.h>
int main() {
    int n,m,p;
    scanf("%d %d %d",&n,&m,&p);
    if ((n==m)&&(m==p)) {
        printf("Equilateral triangle");
    }
    else if (((n==m)&&(p!=m))||((n==p)&&(m!=p))||((m==p)&&(n!=p))) {
        printf("Isosceles triangle");
    }
    else if ((n!=m)&&(m!=p)) {
        printf("Scalar triangle");
    }
}
