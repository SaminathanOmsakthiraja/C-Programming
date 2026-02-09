#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch (n) {
        case 1:
            m-=(0.05*m);
            break;
        case 2:
            m-=(0.15*m);
    }
    printf("Pay Rs%d\n",m);
}
