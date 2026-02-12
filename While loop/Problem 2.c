#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int ini;
    scanf("%d",&ini);
    int count=0;
    while(n!=0) {
        int i;
        scanf("%d",&i);
        ini+=i;
        if (ini<2000)
            count++;
        n--;
    }
    printf("\nFinal Balance: %d\n",ini);
    printf("Low Balance Days: %d",count);
}
