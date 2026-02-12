#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    int maxmax=0;
    int maxc=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        if (i>70) {
            count++;
            maxc++;
            if (maxc>maxmax)
            maxmax=maxc;
        }
        else {
            maxc=0;
        }
        n--;
    }
    printf("Noise Violations: %d\n",count);
    printf("Longest Violation Streak: %d",maxmax);
}
