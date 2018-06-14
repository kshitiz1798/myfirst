#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char ans[100];
    FILE *fp;
    char ch;
    fp=fopen("exam.txt","r");
    if(fp==NULL)
    {
        printf("file not present");
        exit(1);
    }
    while(1)
    {
        ch=fgetc(fp);
        if(fp==EOF)
        {
            printf("file is empty");
            exit(2);
        }
        else
        {
            printf("%s",*fp);
            break;
        }
    }

    printf("\n\n\nEnter your answers: \n");
    for(i=0;i<3;i++)
    {
        printf("ans %d : ",i+1);
        scanf("%s",&ans);
    }
    return 0;
}
