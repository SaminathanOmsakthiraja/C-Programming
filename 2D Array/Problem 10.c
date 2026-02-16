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
    for (int i=0;i<r;i++) {
        int prod=arr[i][0];
        for (int j=1;j<c;j++)
            prod=prod*arr[i][j];
        if (max<prod) {
            max=prod;
            idx=i;
        }
    }
    printf("%d\n",idx);
}
