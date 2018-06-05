/*string comparision*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20][100],temp[20];
    int i,j,n;
    printf("enter the number of students: ");
    scanf("%d",&n);
    if(n > 100)/*if number of names is greater than 100 then it will end the code*/
    {
        exit(0);
    }
    for(i=0;i<n;i++)/*loop for getting the number of input as mentioned above*/
    {
        printf("enter the name of student %d: ",i+1);
        scanf("%s",&name[i]);
    }
    for(i=0;i<n;i++)/*loop for comparing the two names*/
    {
        for(j=0;j<n;j++)
        {
            if(strcmp(name[j],name[j+1])>0)/*compare two names, if j>j+1 it will return 1, hence condition satisfied
                                                                if j<j+1 it will return 0,hence condition not satisfied*/

            {
                strcpy(temp,name[j]);        /*swapping*/
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
printf("names in sorted order:\n");
for(i=0;i<n;i++)/*loop for printing the sorted names*/
{
    printf("%s\n",name[i]);
}
    return 0;
}
