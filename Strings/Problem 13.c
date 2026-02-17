#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    char r;
    scanf("%c",&r);
    int len=strlen(str)-1;
    int idx=-1;
    for (int i=0;i<len;i++) {
        if (str[i]==r) {
            idx=i;
            break;
        }
    }
    printf("%d",idx);
}
