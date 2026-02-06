#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n%5==0) {
        printf("Divisible by %d",5);
    }
    else {
        printf("Not divisible by %d",5);
    }
}
