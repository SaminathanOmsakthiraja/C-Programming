#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch (n) {
        case 1:
            if (m<=30)
                printf("Eligible");
            else if (m>30)
                printf("Eligible with Extra Fee");
            break;
        case 2:
            if (m<=30)
                printf("Eligible");
            else if (m>30)
                printf("Not Eligible");
            break;
        default:
            if (m<=30)
                printf("Eligible");
    }
}
