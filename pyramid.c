#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,trow,space,star;
    printf("enter the number of row: ");
    scanf("%d",&trow);
    for(row=1;row<trow;row++)
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
    for(row<trow-1;row>=1;row--)
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
