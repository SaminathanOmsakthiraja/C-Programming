#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    switch (n) {
        case 1:
            if (m>=80)
                printf("Excellent");
            else
                printf("Not Qualified");
            break;
        case 2:
            if (m>=60)
                printf("Good");
            else
                printf("Not Qualified");
            break;
        case 3:
            printf("Need Improvement");
    }
}
