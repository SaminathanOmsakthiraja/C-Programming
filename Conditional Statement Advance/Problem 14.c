#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<1000) {
        printf("Low Balance");
    }
    else {
        printf("Sufficient Balance");
    }
}
