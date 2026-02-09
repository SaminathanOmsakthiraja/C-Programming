#include <stdio.h>
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int ch=0;
    switch (n) {
        case 1:
            ch+=1*m;
            break;
        case 2:
            ch+=3*m;
            break;
        case 3:
            ch+=10*m;
    }
    printf("Call Charge Rs%d\n",ch);
}
