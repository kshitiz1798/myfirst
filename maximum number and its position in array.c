#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[100],n,max,p=1;
    printf("enter the number of elements in an array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        {
             max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            printf("maximun value is %d at position %d",a[i],p);
            break;
        }
        p++;
    }
    return 0;
}
