#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char grd;
    switch (n/10) {
        case 9:
            grd='A';break;
        case 8:
            grd='B';break;
        case 7:
            grd='C';break;
        case 6:
            grd='D';break;
        case 5:
            grd='E';break;
        case 4:
            grd='F';break;
        case 3:
            grd='G';break;
    }
    if (grd == 'G') {
        printf("Grade Supplementary");
    }
    else if (grd==0){
        printf("Fail");
    }
    else {
        printf("Grade %c",grd);
    }
}
