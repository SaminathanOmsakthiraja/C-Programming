#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int d=0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i-1]) {
            d=1;
        }
    }
    if (d==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}
