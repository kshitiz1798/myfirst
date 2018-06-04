#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,fact=1;
    printf("enter the num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=(fact*i);
    }
    printf("%d",fact);

    return 0;
}
