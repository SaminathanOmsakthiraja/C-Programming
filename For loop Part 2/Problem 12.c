#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int max=0;
    int count=0;
    for(int i=0;i<n;i++) {
        int j;
        scanf("%d",&j);
        if (max<j)
            max=j;
        if (j>100)
            count++;
    }
    printf("Highest Price: %d\n",max);
    printf("High Price Days: %d",count);
}
