#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][5];
    int i, j;

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    A[i][j] = 0;

    A[0][0] = 1;
    A[0][1] = 1;
    A[0][3] = 1;
    A[1][2] = 1;
    A[2][4] = 1;
    A[3][2] = 1;

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    printf("%d",A[i][j]);
    return 0;
}












