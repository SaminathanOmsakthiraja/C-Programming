#include <stdio.h>
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    else {
        return base * power(base, exp - 1);
    }
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int result = power(a,b);
    printf("%d",result);
}
