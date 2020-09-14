#include <stdio.h>

int hash(int);

int main()
{
    int key, hk;
    printf("Enter the next key");
    scanf("%d",&key);

    hk = hash(key);
    printf("%d",hk);
}

int(hash(int k))
{
    return (k-10000);
}