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
    int count=0;
    bool found;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c-1;j++) {
            if (arr[i][j]<arr[i][j+1]) {
                found = true;
            }
            else
                found = false;
        }
        if (found) count++;
    }
    printf("%d\n",count);
}
