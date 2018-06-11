#include <stdio.h>
#include <stdlib.h>

struct detail
{
    char name[10][100];
    int marks[100];
};

int main()
{
    struct detail k;
    int n,i,j,temp;
    char x;
    printf("enter the number of students: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("\nenter  student name %d: ",i);
        scanf("%s",&k.name[i]);
         printf("\nenter the marks of student %d: ",i);
        scanf("%d",&k.marks[i]);
    }

     for(i=1;i<=n;i++)
    {
        printf("name: %s\n",k.name[i]);
        printf("marks: %d\n\n",k.marks[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            while(k.marks[i]>k.marks[j])
            {
                temp=k.marks[i];
                k.marks[i]=k.marks[j];
                k.marks[j]=temp;
            }
        }
    }
printf("heighest marks is of %d ",k.marks[i]);
    return 0;
}
