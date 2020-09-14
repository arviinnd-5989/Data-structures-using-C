#include <stdio.h>
#include <stdlib.h>

int MIN(int, int);

int main()
{
    int P[5][5], SP[5][5];
    int i, j, k;

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    P[i][j] = 0;

    P[0][0] = 8;
    P[0][1] = 3;
    P[0][3] = 4;
    P[1][2] = 7;
    P[2][0] = 4;
    P[2][4] = 5;
    P[3][2] = 2;
    P[4][3] = 1;

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    printf("%d",P[i][j]);

    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    if(P[i][j]==0)
    SP[i][j]=999;
    else
    SP[i][j]=P[i][j];

    for(k=0;k<5;k++)
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    SP[i][j] = MIN(SP[i][j],SP[i][k]+SP[k][j]);

    printf("Path matrix \n");
    for(i=0;i<5;i++)
    {
        printf("\n");
        for(j=0;j<5;j++)
        printf("%d",SP[i][j]);
    }

    return 0;
}

int MIN(int x, int y)
{if(x<=y)
return(x);
else
return(y);
}












