#include <stdio.h>
int main() {
    int n;
    char m;
    scanf("%d\n",&n);
    scanf("%c",&m);
    int amt=0;
    switch (n) {
        case 1:
            if (m=='A') {
                amt=2500;
            }
            else if (m=='B') {
                amt=2000;
            }
            break;
        case 2:
            if (m=='C') {
                amt=4000;
            }
            else if (m=='D') {
                amt=3000;
            }
    }
    printf("Rs%d",amt);
}
