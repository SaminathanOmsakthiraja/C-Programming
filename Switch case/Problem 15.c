#include <stdio.h>
int main() {
    int n;
    char m;
    scanf("%d",&n);
    scanf("\n%c",&m);
    int fee=0;
    switch (n) {
        case 1:
            if (m=='R')
                fee=5000;
            else if (m=='S')
                fee=3000;
            break;
        case 2:
            if (m=='R')
                fee=9000;
            else if (m=='S')
                fee=7000;
    }
    printf("%d\n",fee);
}
