#include<stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-1;
    char strcp[len];
    for (int i=0;i<len;i++) {
        strcp[i]=str[i];
        strcp[i+1]='\0';
    }
    printf("%s\n",strcp);
}
