#include<stdio.h>
int main()
{
int array[10] = {5,4,3,2,1};
int i,k,j,temp;
for(i=0;i<5;i++)
printf("%d = %d\n",i,array[i]);
for(i=5;i>1;i--)
for(j=0; j<i-1;j++)
if(array[j] > array[j+1])
{temp = array[j+1];
array[j+1] = array[j];
array[j] = temp;}
for(i=0;i<5;i++)
printf("%d",array[i]);
return 0;

}