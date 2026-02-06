#include <stdio.h>
int main() {
    char n;
    scanf("%c",&n);
    if (n=='a'||n=='A'||n=='e'||n=='E'||n=='u'||n=='U'||n=='i'||n=='I'||n=='o'||n=='O') {
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }
}
