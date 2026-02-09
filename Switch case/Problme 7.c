#include <stdio.h>
int main() {
    int n,y;
    scanf("%d",&n);
    scanf("%d",&y);
    int irt=0;
    switch (n) {
        case 1:
            irt=5;
            break;
        case 2:
            if (y<=3) {
                irt=5;
            }
            else {
                irt=7;
            }
            break;
    }
    printf("Interest %d%%\n",irt);
}
