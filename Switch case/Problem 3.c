#include <stdio.h>
int main() {
    int n,blc,wid;
    scanf("%d",&n);
    scanf("%d",&blc);
    scanf("%d",&wid);
    switch (n) {
        case 1:
            if (wid<=blc) {
                printf("Transaction Successfull");
            }
            else {
                printf("Limit Exceeded");
            }
            break;
        case 2:
            if (wid>5000) {
                printf("Limit Exceeded");
            }
            else {
                printf("Transaction Successfull");
            }
    }
}
