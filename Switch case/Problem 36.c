#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:
            printf("Upgrade Fee Rs%d",300);;break;
        case 2:
            printf("Upgrade Fee Rs%d",800);break;
        case 3:
            printf("Upgrade Fee Rs%d",1500);break;
    }
}
