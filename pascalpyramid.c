#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,trow,space,chars;
    printf("enter the number of row: ");
    scanf("%d",&trow);
    for(row=0;row<=trow;row++)
    {
        for(space=trow-row;space>=1;space--)
        {
            printf(" ");
        }
        int pchar=1;
        int num=row;
        int den=1;
        for(chars=0;chars<=row;chars++)
        {
            printf("%d ",pchar);
            pchar=pchar*num;
            pchar=pchar/den;
            num--;
            den++;
        }
        printf("\n");
    }
    return 0;
}
