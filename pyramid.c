/*pyramid formation*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,trow,space,star;
    printf("enter the number of row: ");
    scanf("%d",&trow);
    for(row=1;row<trow;row++)/*row starts from 1 and end at the number of entered rows*/
    {
        for(space=trow-row;space>=1;space--)/*space starts from twice the number of total row -1, and end at 1*/
        {
            printf(" ");
        }
        for(star=1;star<=(2*row)-1;star++)/*stars will start printing from 1 and will end at twice the total row -1*/
        {
            printf("*");
        }
        printf("\n");
    }
    for(row<trow-1;row>=1;row--)/*this loop will start from a number less than the number entered for total row */
    {
        for(space=trow-row;space>=1;space--)
        {
            printf(" ");
        }
        for(star=1;star<=(2*row)-1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
        return 0;
}
