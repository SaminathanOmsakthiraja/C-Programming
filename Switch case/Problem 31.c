#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:
            printf("Membership Fee Rs%d",1500);;break;
        case 2:
            printf("Membership Fee Rs%d",4000);break;
        case 3:
            printf("Membership Fee Rs%d",7000);break;
    }
}
