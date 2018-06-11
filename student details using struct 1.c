#include <stdio.h>
#include <stdlib.h>

struct detail
{
    char name[20];
    int marks;
};

int main()
{
    int i,n,j;
   struct detail arr_detail[100];
   printf("enter the number of students: ");
   scanf("%d",&n);


   for(i=1;i<=n;i++)
    {
        printf("\nenter  student name %d: ",i);
        scanf("%s",&arr_detail[i].name);
         printf("\nenter the marks of student %d: ",i);
        scanf("%d",&arr_detail[i].marks);
    }
    printf("name\tmarks\n\n");

     for(i=1;i<=n;i++)
    {
        printf("%s\t%d\n",arr_detail[i].name,arr_detail[i].marks);
    }

    return 0;
}
