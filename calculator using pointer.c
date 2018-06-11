#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[100],i,*p[100],sum=0,mult=1,n;
    printf("enter the count of numbers to add and multiply: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the number %d:",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        p[i]=&a[i];
    }
    for(i=1;i<=n;i++)
    {
        sum=sum + *p[i];
        mult=mult * *p[i];
    }
    printf("sum=%d:\n",sum);
    printf("multiplication=%d:\n\n\n",mult);


    printf("enter two number to subtract and divide: ");
    int k1,k2,sub,div,*l1,*l2;
    scanf("%d%d",&k1,&k2);
    l1=&k1;
    l2=&k2;
    if(*l1 < *l2)
    {
        printf("k1 should be greater than k2;");
    }
    else if(*l1 > *l2)
    {
        sub = *l1 - *l2;
        div = *l1 / *l2;
        printf("subtraction=%d\n",sub);
        printf("division=%d",div);
    }
    else{printf("0");}



    return 0;
}
