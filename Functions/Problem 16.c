#include <stdio.h>
void fibonacci(int n) {
    int a=0,b=1;
    printf("%d %d ",a,b);
    for(int i=2;i<n;i++) {
        int sum=a+b;
        a=b;
        b=sum;
        printf("%d ",b);
    }
}
int main() {
    int a;
    scanf("%d",&a);
    fibonacci(a);
}
