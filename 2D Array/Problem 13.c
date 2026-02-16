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
    for (int i=0;i<r;i++) {
        bool pal=false;
        int b=c-1;
        for (int j=0;j<c/2;j++) {
            pal=false;
            if (arr[i][j]==arr[i][b--])
                pal=true;
        }
        if (pal) count++;
    }
    printf("%d\n",count);
}
