#include <stdio.h>
int main() {
    int n,m;
    char p;
    scanf("%d%c%d",&n,&p,&m);
    switch (p) {
        case '+':
            printf("%d\n",n+m);break;
        case '-':
            printf("%d\n",n-m);break;
        case '*':
            printf("%d\n",n*m); break;
        case '/':
            printf("%d\n",n/m); break;
    }
}
