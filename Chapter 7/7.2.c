#include <stdio.h>
#include <stdlib.h>

int AND(int, int);
int OR(int,int);

int main()
{
    int A[5][5], P[5][5];
    int i, j, k;

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

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    P[i][j] = A[i][j];

    for(k=0;k<5;k++)
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    P[i][j] = OR(P[i][j],AND(P[i][k],P[k][j]));

    printf("Path matrix \n");
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        printf("%d",P[i][j]);
    }

    return 0;
}

int AND(int x, int y)
{return (x*y);
}

int OR(int x, int y)
{if(x==0 && y==0)
return(0);
else
{
return(1);
}
}












