#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int fee=0;
    switch (n) {
        case 1:
            fee=1200;
            break;
        case 2:
            fee=800;
            break;
        case 3:
            fee=500;
    }
    printf("Exam Fee Rs%d\n",fee);
}
