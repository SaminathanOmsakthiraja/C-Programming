#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>=85) {
        printf("Distinction");
    }
    else if (n<85 && n>35){
        printf("Pass");
    }
    else {
        printf("Fail");
    }
}
