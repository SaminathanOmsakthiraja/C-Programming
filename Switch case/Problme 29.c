#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch(n) {
        case 1:
            printf("Fare Rs%d",10*m);;break;
        case 2:
            printf("Fare Rs%d",15*m);break;
        case 3:
            printf("Fare Rs%d",20*m);
    }
}
