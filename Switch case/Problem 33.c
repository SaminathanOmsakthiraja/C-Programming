#include <stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch(n) {
        case 1:
            printf("Late Fee Rs%d",2*m);;break;
        case 2:
            printf("Late Fee Rs%d",5*m);break;
        }
}
