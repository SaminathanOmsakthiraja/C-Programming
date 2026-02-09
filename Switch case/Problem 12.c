#include <stdio.h>
int main() {
    int n;
    float m;
    scanf("%d",&n);
    scanf("%f",&m);
    int amt=0;
    switch (n) {
        case 1:
            if (m==1)
                amt=100;
            else if (m>1)
                amt=800;
            break;
        case 2:
            amt=m*240;
    }
    printf("%d\n",amt);
}
