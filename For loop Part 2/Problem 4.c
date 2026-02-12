#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    n=n-(m*100);
    printf("Final Salary: Rs%d",n);
}
