#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,rem,rev=0;
    printf("enter a number: ");
    scanf("%d",&i);
    while(i>0)
    {
        rem=i%10;
        i=i/10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
        return 0;
}
