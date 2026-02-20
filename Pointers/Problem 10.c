#include <stdio.h>
#include <string.h>
#include <ctype.h>

int CountWords(char *str) {
    int inword = 0;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i]) && !inword) {
            inword = 1;
            count++;
        }
        else if ( isspace(str[i])) inword = 0;
    }
    return count;
}
int main() {
    char str[200];
    fgets(str, 200, stdin);
    int count = CountWords(&str[0]);
    printf("%d\n", count);
}
