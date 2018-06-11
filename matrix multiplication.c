#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100],b[100][100],mult[100][100],add[100][100],r1,c1,r2,c2,i,j,k;
    printf("enter row and column for 1st matrix: \n");
    scanf("%d%d",&r1,&c1);
    printf("enter row and column for 2nd matrix: \n");
    scanf("%d%d",&r2,&c2);
    while(c1!=r2)
    {
        printf("column of first is not equal to row of second\n");
        printf("enter row and column for 1st matrix: \n");
        scanf("%d%d",&r1,&c1);
        printf("enter row and column for 2nd matrix: \n");
        scanf("%d%d",&r2,&c2);
    }
    printf("enter the elements in first matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a%d%d=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements in second matrix\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b%d%d=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mult[i][j]=0;
            add[i][j]=0;
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                mult[i][j]=mult[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    printf("multiplication\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {

            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            add[i][j]=a[i][j]+b[i][j];
        }
    }
     printf("addition\n");
      for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
           printf("%d ",add[i][j]);
        }
        printf("\n");
    }

    return 0;
}
