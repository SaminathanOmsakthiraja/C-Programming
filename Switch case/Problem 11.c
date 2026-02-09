#include <stdio.h>
int main() {
    int n;
    float m;
    scanf("%d",&n);
    scanf("%f",&m);
    switch (n) {
        case 1:
            if (m<=1)
                printf("Normal Speed");
            else if (m>1)
                printf("Speed Reduced");
            break;
        case 2:
            if (m<=2)
                printf("Normal Speed");
            else if (m>2)
                printf("Extra Charges Applied");
            break;
        default:
            printf("Extra Charges Applied");
    }
}
