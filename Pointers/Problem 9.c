#include <stdio.h>

int find(int *arr,int size, int *target) {
    int idx = -1;
    for (int i = 0; i < size; i++) {
        if (*(arr+i)==*target) {
            idx = i+1;
            break;
        }
    }
    return idx;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);
    int position=find(&arr[0],size,&target);
    printf("%d\n", position);
}
