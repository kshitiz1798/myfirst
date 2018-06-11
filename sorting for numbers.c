#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n,j,temp;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("unsorted array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d->",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            while(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nsorted array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d<",a[i]);
    }
    return 0;
}
