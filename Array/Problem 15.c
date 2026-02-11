#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    int arr2[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        arr2[i]=0;
    }
    int a=0;
    for(int i = 0; i < size; i++) {
        if (arr[i]!=0) {
            arr2[a++] = arr[i];
        }
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
}
