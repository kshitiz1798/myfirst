#include <stdio.h>
#include<stdlib.h>
void area(int,float *);
void perimeter(int,float *);
int main()
{
    int r;
    float a,p;
    printf("enter the  radius: ");
    scanf("%d",&r);
    area(r,&a);
    printf("area=%f",a);
    perimeter(r,&p);
    printf("perimeter=%f",p);
    return 0;
}
void area(int r,float *a)
{
    *a=3.14*r*r;
    return a;
}
void perimeter(int r,float *p)
{
    *p=2*3.14*r;
    return p;
}


