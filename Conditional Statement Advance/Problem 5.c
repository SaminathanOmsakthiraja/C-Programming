#include <stdio.h>
int main() {
    float n;
    scanf("%f",&n);
    if (n>2.0) {
        printf("Data limit exceeded");
    }
    else {
        printf("Data within limit");
    }
}
