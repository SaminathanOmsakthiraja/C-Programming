#include <stdio.h>
#include <limits.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
    int idx=0;
    int max=INT_MIN;
    int col=0;
    for (int i=0;i<c;i++) {
        int sum=0;
        for (int j=0;j<r;j++) {
            sum+=arr[j][i];
        }
        if (sum>max) {
            max=sum;
            idx=i;
        }
    }
    printf("%d\n",idx);
}
