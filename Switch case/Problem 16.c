#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int amt=0;
    switch (n) {
        case 1:
            amt=m*300;
            printf("Extra Baggage Charge Rs%d\n",amt);
            break;
        case 2:
            if (m<=3) {
                printf("Free");
            }
            else {
                m-=3;
                amt=m*300;
                printf("Extra Baggage Charge Rs%d\n",amt);
            }
    }
}
