#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create();
void display();
void find();
struct node *start;

int main()
{
start=NULL;
create();
display();
find();
    return 0;
}

void create()
{
    int i,n;
    printf("enter the count of digits to be entered: ");
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

                new=(struct node*)malloc(sizeof(struct node));
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
void find()
{
    struct node *temp;
    temp=start;
    int f;
    printf("\nenter a number to find: ");
    scanf("%d",&f);

    while(temp!=NULL)
    {
        if(f==temp->data)
        {
        printf("%d is present",f);
        break;
        }
    else
        {
            printf("not found");
            temp=temp->next;
            break;
        }

}
}
