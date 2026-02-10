#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:
            printf("Speed %d Mbps",40);;break;
        case 2:
            printf("Speed %d Mbps",100);break;
        case 3:
            printf("Speed %d Mbps",300);break;
    }
}
