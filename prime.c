#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,j;
 for(i=200;i>=1;i--)
 {
     for(j=2;j<i;j++)
     {
         if(i%j==0)
         {
             break;
         }

     }
     if(i==j)
        {
            printf("%d\n",i);
     }
 }


    return 0;
}
