#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int m;
    scanf("%d", &m);
    int s1;
    int s2;
    for (int i = 0; i < size; i++) {
        s1=arr[i];
        for (int j = i + 1; j < size; j++) {
            s2=arr[j];
        }
        if (s1+s2 == m) {
            printf("%d %d",s1,s2);
            break;
        }
    }if (s1+s2!=m) {
        printf("No pair");
    }
}
