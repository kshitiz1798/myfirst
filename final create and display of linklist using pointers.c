#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display();
void create();
struct node *start;
int main()
{
    start=NULL;
    create();
    display();
    return 0;
}

void create()
{
    int n,i;
    printf("enter the count of elements to be entered: ");
    scanf("%d",&n);
    struct node *new,*temp;
    for(i=1;i<=n;i++)
    {
     if(start==NULL)
    {
        new=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        start=new;
        temp=start;
    }
    else
        {
        new=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&new->data);
        new->next=NULL;
        temp->next=new;
        temp=new;
        }

}
}

void display()
{
     struct node *temp;
     temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }

}
