#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch(n) {
        case 1:
            printf("Fuel Cost Rs%d",105*m);;break;
        case 2:
            printf("Fuel Cost Rs%d",92*m);break;
        case 3:
            printf("Fuel Cost Rs%d",85*m);break;
    }
}
