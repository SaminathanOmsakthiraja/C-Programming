#include <stdint.h>
#include<stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int min=INT_MAX;
    int count=0;
    for(int i=0;i<n;i++) {
        int j;
        scanf("%d",&j);
        if (min>j)
            min=j;
        if (j<210)
            count++;
    }
    printf("Minimum Voltage: %d\n",min);
    printf("Low Voltage Events: %d",count);
}
