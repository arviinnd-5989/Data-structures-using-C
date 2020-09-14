#include<stdio.h>
int main()
{
int i,j,A[3][3], B[3][3], C[3][3];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{scanf("%d", &A[i][j]);}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{scanf("%d", &B[i][j]);}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
C[i][j] =  A[i][j] + B[i][j];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{printf("%d", C[i][j]);}
return 0;

}