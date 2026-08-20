//Print an inverted pyramid
#include <stdio.h>
int main() {
    int i, j, k, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i=1; i<=rows; i++) {
        for(k=1; k<i; k++) {
            printf(" ");
        }
        for (j=1; j<=(2*(rows-i)+1); j++) {
            printf("*");
        }
        printf("\n");
    }
}