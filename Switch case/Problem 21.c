#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int tick=0;
    switch (n) {
        case 1:
            tick=150;
            if (m>=18)
                tick+=50;
            break;
        case 2:
            tick=250;
            if (m>=18)
                tick+=50;
            break;
    }
    printf("Ticket Price Rs%d\n",tick);
}
