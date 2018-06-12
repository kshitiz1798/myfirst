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
void delete();
void insert();
void reverse();
struct node *start;

int main()
{
    start=NULL;
    create();
    display();
    find();
    delete();
    display();
    insert();
    display();
    reverse();
    display();
    return 0;
}

void create()
{
    int n,i;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    struct node *new,*temp;
    for(i=1;i<=n;i++)
    {
        printf("enter the value %d: ",i);
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

void find()
{
    int f,key,p=1;
    printf("\n\nenter the element to find: ");
    scanf("%d",&f);
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        if(temp->data==f)
        {
            printf("%d is present at location %d",f,p);
            break;
        }
        else
        {
            temp=temp->next;
        }
        p++;
    }
}

void delete()
{
    int d;
    printf("\n\nenter the value to be deleted: ");
    scanf("%d",&d);
    struct node *temp1,*temp2;
    if(start!=NULL)
    {
        if(start->data==d)
        {
            temp1=start;
            start=start->next;
            free(temp1);
            printf("node is deleted\n");
        }
        else
        {
            temp1=start;
            temp2=start->next;
            while(temp2!=NULL)
            {
            if(temp2->data==d)
            {
                temp1->next=temp2->next;
                free(temp2);
                printf("node is deleted\n");
                break;
            }
            else
            {
                temp1=temp2;
                temp2=temp2->next;
            }
            }
        }
    }
    else
    {
        printf("linked list is empty");
    }
}


void insert()
{
    int i,p;
    struct node *temp1,*temp2,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("\n\nenter the value to be inserted: ");
    scanf("%d",&newnode->data);
    printf("enter the location for insertion: ");
    scanf("%d",&p);
    if(start==NULL)
    {
        start=newnode;
        printf("node inserted");
    }
    else
    {
        if(start->data==p)
        {
            newnode->next=start;
            start=newnode;
            printf("node inserted\n");
        }
        else
        {
            temp1=start;
            temp2=start->next;
            while(temp2!=NULL)
            {
                if(temp2->data==p)
                {
                    temp1->next=newnode;
                    newnode->next=temp2;
                    printf("node is inserted\n");
                    break;
                }
                else
                {
                    temp1=temp2;
                    temp2=temp2->next;
                }
            }
        }
    }
}


void reverse()
{
    printf("\n\nreverse linked list: ");
    struct node *temp1,*temp2;
    if(start!=NULL)
    {
    temp1=start;
    temp2=temp1->next;
    start=NULL;
    while(temp2!=NULL)
    {
        temp1->next=start;
        start=temp1;
        temp1=temp2;
        temp2=temp2->next;
    }
    temp1->next=start;
    start=temp1;
    }
    else
    {
        printf("list is empty");
    }
}
