/*code to find factorial of a number*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,fact=1;/*declare them as integer type*/
    printf("enter the num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)/*run the loop from 1 to the number we entered,so that it keeps on muliplying*/
    {
        fact=(fact*i);/*multiply i till the number is reached*/
    }
    printf("%d",fact);

    return 0;
}
