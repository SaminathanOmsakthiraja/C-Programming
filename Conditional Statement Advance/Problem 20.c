#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<20) {
        printf("Heating Mode");
    }
    else if (n>=20 && n<30) {
        printf("Normal Mode");
    }
    else {
        printf("Cooling Mode");
    }
}
