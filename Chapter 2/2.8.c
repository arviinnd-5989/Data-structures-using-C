#include<stdio.h>
int main()
{
int i,j,k,A[3][3], B[3][3], C[3][3];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{scanf("%d", &A[i][j]);}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{scanf("%d", &B[i][j]);}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{C[i][j]=0;
for(k=0;k<3;k++)
C[i][j] =  C[i][j] + A[i][k]*B[k][j];
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{printf("%d", C[i][j]);}
return 0;

}