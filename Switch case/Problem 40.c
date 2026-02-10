#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:
            printf("Under Warranty");break;
        case 2:
            printf("Limited Warranty");break;
        case 3:
            printf("Out of Warranty");break;
        }
}
