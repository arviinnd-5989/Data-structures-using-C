#include<stdio.h>
int main()
{
int array[10] = {-1,3,5,22,77};
int i, k, N, D;
N = 5;
for(i=0;i<N;i++)
printf("%d = %d\n",i,array[i]);
printf("Index \n");
scanf("%d",&k);
D = array[k];
for(i=k;i<=N-2;i++)
array[i] = array[i+1];
N = N-1;

for(i=0;i<N;i++)
printf("%d",array[i]);
return 0;

}