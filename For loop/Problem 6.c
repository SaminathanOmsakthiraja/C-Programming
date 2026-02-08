#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int s;
    scanf("%d", &s);
    int count=0;
    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j < size; j++) {
            if ((arr[i]+arr[j])>=s) {
                count++;
            }
        }
    }
    printf("%d", count);
}
