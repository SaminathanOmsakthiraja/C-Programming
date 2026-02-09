#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<=5) {
        printf("Fine Rs%d\n",n*50);
    }
    else if (n<=10) {
        printf("Fine Rs%d\n",n*100);
    }
    else {
        printf("Fine Rs%d\n",n*200);
    }
}
