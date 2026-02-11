#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int min=arr[0];
    for(int i = 1; i < size; i++){
        if (arr[i]<=0)
            continue;
        else if (arr[i]<arr[i-1]) {
            min=arr[i];
        }
    }
    if (min<=0) {
        printf("No positive");
    }else
    printf("%d", min);
}
