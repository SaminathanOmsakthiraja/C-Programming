#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int max=0;
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        if (max<i) max=i;
        if (i>5)
            count++;
        n--;
    }
    printf("Max Usage %d\n",max);
    printf("Surge Hours: %d",count);
}
