#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum1=0;
    int sum2=0;
    int i=0;
    int j=size-1;
    while(i<j) {
        sum1+=arr[i];
        sum2+=arr[j];
        i++;
        j--;
    }
    if (sum1==sum2) {
        printf("%d", i);
    }
    else
        printf("%d", -1);
}
