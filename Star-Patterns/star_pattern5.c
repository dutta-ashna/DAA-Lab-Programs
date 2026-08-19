//Print an inverted laterally triangle
#include <stdio.h>
int main ()
{
    int i, j, k, rows;
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    for (i=1; i <=rows; i++)
    {
        for (k=0; k<i; k++)
        {
            printf("  ");
        }
        for (j=rows; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}