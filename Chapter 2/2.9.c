#include<stdio.h>
int main()
{
int i,j,k,A[3][3], T[3][3];
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{scanf("%d", &A[i][j]);}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
T[i][j] =  A[j][i];
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{printf("%d", T[i][j]);}
return 0;

}