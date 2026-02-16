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
        for (int j=0;j<c;j++) {
            int ele=arr[i][j];
            int div=0;
            for (int k=2;k<ele;k++)
                if (ele%k==0)
                    div++;
            if (div==0 && ele!=1) count++;
        }
    }
    printf("%d\n",count);
}
