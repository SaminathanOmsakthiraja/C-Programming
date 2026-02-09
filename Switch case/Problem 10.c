#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int amt=0;
    switch (n) {
        case 1:
            amt=50000;
            break;
        case 2:
            amt=35000;
    }
    if (m>=3) {
        amt+=m*5000;
    }
    printf("Salary Rs%d",amt);
}
