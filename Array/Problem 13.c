#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int sum=0;
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    int count=0;
    int avg=sum/size;
    for(int i = 0; i < size; i++) {
        if (arr[i]>avg) {
            count++;
        }
    }
    printf("%d", count);
}
