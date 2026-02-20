#include <stdio.h>
int calculator(int a,int b,char c){
    switch(c) {
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
    }
}
int main() {
    int a,b;
    scanf("%d %d ",&a,&b);
    char c;
    scanf("%c",&c);
    int result = calculator(a,b,c);
    printf("%d",result);
}
