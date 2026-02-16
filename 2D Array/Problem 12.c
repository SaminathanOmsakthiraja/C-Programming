#include <stdio.h>
#include <limits.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int arr1[r*c];
    int k=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
            arr1[k++]=arr[i][j];
        }
    }
    int ele;
    int fre=0;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            int fre_val=0;
            int val=arr[i][j];
            for (int k=0;k<r*c;k++) {
                if (val==arr1[k]) {
                    fre_val++;
                }
            }
            if (fre_val>fre) {
                fre=fre_val;
                ele=val;
            }
        }
    }
    printf("%d\n",ele);
}
