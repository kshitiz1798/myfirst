#include <stdio.h>
#include <stdlib.h>

struct exam
{
    char que[200];
    char opt1[200];
    char opt2[200];
    char opt3[200];
    char opt4[200];
    char ans[200];
    char fans[200];
};
int main()
{
    struct exam arr_exam[3];
    printf("Enter the questions, their options and the correct answers manually");
    int i,total=1,score=0;
    for(i=0;i<3;i++)
    {
        printf("\n\nenter que %d : ",i+1);
        gets(arr_exam[i].que);
        printf("opt1-->");
        gets(arr_exam[i].opt1);
        printf("opt2-->");
        gets(&arr_exam[i].opt2);
        printf("opt3-->");
        gets(&arr_exam[i].opt3);
        printf("opt4-->");
        gets(&arr_exam[i].opt4);
        printf("correct answer-->");
        gets(&arr_exam[i].ans);
    }
    printf("\n\n\n***ONLINE EXAM***\n\n");
    for(i=0;i<3;i++)
    {
        printf("\n\nQuestion %d : %s.",i+1,arr_exam[i].que);
        printf("\nopt1-->%s",arr_exam[i].opt1);
        printf("\nopt2-->%s",arr_exam[i].opt2);
        printf("\nopt3-->%s",arr_exam[i].opt3);
        printf("\nopt4-->%s",arr_exam[i].opt4);
        printf("\nEnter your answer : ");
        gets(arr_exam[i].fans);
    }
    for(i=0;i<3;i++)
    {
        total=4*(i+1);
    }
    for(i=0;i<3;i++)
    {
        if(strcmp(arr_exam[i].fans , arr_exam[i].ans)==0)
        {
            score=score+4;
        }
        else
        {
            score=score-1;
        }

    }
    printf("\n\n\nYour total score is : %d/%d",score,total);
    return 0;
}
