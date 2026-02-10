#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int amt=0;
    switch(n) {
        case 1:
            printf("Delivery Charge Rs%d",40);;break;
        case 2:
            printf("Delivery Charge Rs%d",120);break;
        case 3:
            printf("Free");
    }
}
