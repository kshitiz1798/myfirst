/*code for pascal pyramid*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,trow,space,chars;
    printf("enter the number of row: ");
    scanf("%d",&trow);
    for(row=0;row<=trow;row++)/*loop for pyramid formation for entered number of rows*/
    {
        for(space=trow-row;space>=1;space--)/*loop for entering space, from maximum space possible to 1*/
        {
            printf(" ");
        }
        int pchar=1;
        int num=row;
        int den=1;
        for(chars=0;chars<=row;chars++)/*for printing the numerical value*/
        {
            printf("%d ",pchar);/*1 will be printed*/
            pchar=pchar*num;/*number will now be multiplied to numerator, which is initially the value of row*/
            pchar=pchar/den;/*number will be divided to denominator which is initially 1*/
            /*pchar is changed to a different number by multiplication and division*/
            num--;/*then after multiplication numerator will be decreased by  1*/
            den++;/*after division denominator will be incremented by 1*/
            /*numerator and denominator will be changed*/
        }
        printf("\n");
    }
    return 0;
}
