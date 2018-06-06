/*reverse of  number*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,rem,rev=0;
    printf("enter a number: ");
    scanf("%d",&i);
    while(i>0)
    {
        rem=i%10;/*gets the one's place digit number*/
        i=i/10;/*remove the one's place digit number*/
        rev=rev*10+rem;/*  suppose enter number is 654
                           0*10+4=4
                           4*10+5=45
                           45*10+6=456  */
    }
    printf("%d",rev);
        return 0;
}
