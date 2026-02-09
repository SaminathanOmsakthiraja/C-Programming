#include <stdio.h>
int main() {
    int n,att;
    scanf("%d",&n);
    scanf("%d",&att);
    if (att<75) {
        printf("Fail");
    }
    else if (n>=75) {
        printf("Distinction");
    }
    else if (n>50 && n<75) {
        printf("Pass");
    }
    else if (n<50){
        printf("Fail");
    }
}
