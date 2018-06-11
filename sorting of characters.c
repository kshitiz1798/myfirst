#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char temp,str[100];
    printf("enter the string: ");
    gets(str);
    printf("unsorted array: \n");
    puts(str);
    for(i=0;i<str[i];i++)
    {
        for(j=i+1;j<str[j];j++)
        {
            while(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("\nsorted array: \n");
        printf("%s",str);
    return 0;
}
