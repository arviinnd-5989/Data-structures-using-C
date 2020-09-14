#include<stdio.h>
int main()
{
int array[5] = {22,19,4,8,10};
int i,flag,k,index;
flag = 0;
for(i=0;i<5;i++)
printf("%d = %d\n",i,array[i]);
printf("Element \n");
scanf("%d",&k);
for(i=0;i<5;i++)
if(k==array[i])
{flag = 1;
index = i;
break;
}else ;
if (flag==1)
printf("%d = %d",k,index);
else
  printf("unsuccessful");
return 0;

}