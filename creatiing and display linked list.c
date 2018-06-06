#include <stdio.h>
#include <stdlib.h>


typedef struct node                   /*structure to create linked list*/
{
    int data;
    struct node * next;
}node;

void display(node * head);            /*function to display linklist*/
node * linklist(int n);               /*function to create linked list*/



int main()
{
    int n=0;
    node * HEAD=NULL;
    printf("enter the number of nodes: ");
    scanf("%d",&n);
    HEAD=linklist(n);
    display(HEAD);
    return 0;
}

node * linklist(n)
{
    int i=0;
    node * head=NULL;
    node * last=NULL;
    node * first=NULL;
    for(i=0;i<n;i++)
    {
        last=(node*)malloc(sizeof(node));                     /*create a node*/
        printf("\n enter the data for node %d: ",i+1);
        scanf("%d",&(last->data));
        last->next=NULL;

        if(head==NULL)                                        /*if list is empty, temp is the first node*/
        {
            head=last;
        }
        else
        {
            first=head;
            while(first->next!=NULL)
            {
                first=first->next;
            }
            while(first->next==NULL)
            {
                first->next=last;
            }
        }
    }
    return head;
}

void display(node * head)
{
    node * first=head;
    while(first!=NULL)
    {
        printf("%d->",first->data);
        first=first->next;
    }



int p=1,key;
printf("\nenter the digit you want to find: ");
scanf("%d",&key);

    while(first!=NULL)
    {
        if(key==first->data)
        {
                printf("found %d at position %d",key,p);
                break;
        }
        else
        {
                first=first->next;
        }
        p++;
    }
}

