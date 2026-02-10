#include <stdio.h>
int main() {
    int m;
    scanf("%d",&m);
    int n=0;
    if (m<=1) {
        n=1;
    }
    else if (m<=4) {
        n=2;
    }
    else {
        n=3;
    }
    switch(n) {
        case 1:
            printf("Short Interruption");;break;
        case 2:
            printf("Medium Interruption");break;
        case 3:
            printf("Long Interruption");break;
    }
}
