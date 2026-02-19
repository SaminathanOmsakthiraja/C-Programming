#include <stdio.h>
void Perfect(int n) {
    int sum=0;
    for (int i=1; i<n; i++) {
        if (n%i==0) sum+=i;
    }
    if (sum==n) printf("Perfect Number\n");
    else printf("Not Perfect Number\n");
}
int main() {
    int a;
    scanf("%d",&a);
    Perfect(a);
}
