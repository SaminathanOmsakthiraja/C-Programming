#include <stdio.h>
#include <math.h>
int count_digits(int a) {
    int count = 0;
    while (a != 0) {
        a = a / 10;
        count++;
    }
    return count;
}
void Amstrong(int n) {
    int temp = n;
    int count = count_digits(n);
    int sum = 0;
    while (n != 0) {
        sum += pow(n%10,count);
        n = n/10;
    }
    if (sum == temp) printf("Amstrong");
    else printf("Not Amstrong");
}
int main() {
    int a;
    scanf("%d",&a);
    Amstrong(a);
}
