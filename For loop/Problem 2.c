#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    int n=0;
    for (int i = 1; i < size; i++) {
        if (max<arr[i]) {
            max=arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        if (max==arr[i]) {
            n=i+1;
        }
    }
    printf("%d", n);
}
