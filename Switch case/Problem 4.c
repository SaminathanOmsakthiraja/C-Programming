#include <stdio.h>
int main() {
    int n,age;
    scanf("%d",&n);
    scanf("%d",&age);
    int amt=0;
    switch (n) {
        case 1:
            amt=300;
            if (age<12) {
                amt-=150;
            }
            if (age>=60) {
                amt-=100;
            }
            break;
        case 2:
            amt=1000;
            if (age<12) {
                amt-=500;
            }
            break;
    }
    printf("Fare Rs%d\n",amt);
}
