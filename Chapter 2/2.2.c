#include<stdio.h>
int main()
{
int array[10] = {-1,3,5,22,77};
int i, k, N, P;
N = 5;
for(i=0;i<N;i++)
printf("%d = %d",i,array[i]);
printf("element\n");
scanf("%d",&P);
printf("Index \n");
scanf("%d",&k);
for(i=N;i>=k;i--)
array[i+1] = array[i];

array[k] = P;
N = N+1;

for(i=0;i<N;i++)
printf("%d",array[i]);
return 0;

}