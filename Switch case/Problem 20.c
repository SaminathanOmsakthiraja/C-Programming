#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch (n) {
        case 1:
            printf("Full Access");
            break;
        case 2:
            if (m<=20 && m>=9)
                printf("Limited Access");
            else
                printf("Access Denied");
            break;
    }
}
