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
    int summax=INT_MIN;
    for (int i=0;i<r-1;i++) {
        for (int j=0;j<c-1;j++) {
            int sum=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
            if (sum>summax) {
                summax=sum;
            }
        }
    }
    printf("%d\n",summax);
}
