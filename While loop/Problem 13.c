#include<stdio.h>
int main() {
    int data;
    scanf("%d",&data);
    int n;
    scanf("%d",&n);
    int count=0;
    while (n!=0) {
        int i;
        scanf("%d",&i);
        data-=i;
        count++;
        if (data<0) {
            data+=i;
            break;
        }
        n--;
    }
    printf("Exhausted Day: %d\n",count);
    printf("Overused Data: %d\n",data);
}
