#include <stdio.h>
int main() {
    int n;
    float m;
    scanf("%d",&n);
    scanf("%f",&m);
    int amt=0;
    switch (n) {
        case 1:
            if (m<=5)
                amt=1500;
            else if (m>5)
                amt=2500;
            break;
        case 2:
            if (m<=5)
                amt=4000;
            else if (m>5)
                amt=6000;
    }
    printf("%d\n",amt);
}
