#include <stdio.h>
void Multiple(int n) {
    for (int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
int main() {
    int a;
    scanf("%d",&a);
    Multiple(a);
}
