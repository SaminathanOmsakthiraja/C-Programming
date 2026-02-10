#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    switch(n) {
        case 1:
            printf("Fine Rs%d",1000);;break;
        case 2:
            printf("Fine Rs%d",1500);break;
        case 3:
            printf("Fine Rs%d",2000);break;
    }
}
