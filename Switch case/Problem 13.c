#include <stdio.h>
int main() {
    int n;
    float m;
    scanf("%d",&n);
    scanf("%f",&m);
    switch (n) {
        case 1:
            if (m>=700)
                printf("Approved");
            else if (m<700 && m>=650)
                printf("Manual Review");
            break;
        case 2:
            if (m>=700)
                printf("Approved");
            else if (m<700)
                printf("Rejected");
    }
}
