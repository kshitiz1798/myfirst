/*for printing prime numbers below 200*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j;
 for(i=200;i>=1;i--)/*for starting the numerator from 200 and end at 1*/
 {
     for(j=2;j<i;j++)/*for starting the denominator from 2 to a number less than numerator*/
     {
         if(i%j==0)
         {
             break;/*if remainder is 0 the loop breaks and start again,if not the it move forward*/
         }

     }
     if(i==j)/*if the number is not divisible by any number smaller than the number itself then it is a prime number*/
        {
            printf("%d\n",i);
     }
 }


    return 0;
}
