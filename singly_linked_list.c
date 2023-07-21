#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
}*head,*temp,*newnode,*tail;
int main()
{
    int a,i;
    printf("Enter the size :");
    scanf("%d",&a);
    printf("Enter data:");
    for(i=0;i<a;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    printf("Displaying all the data");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nEnter a element to insert at front:");
     newnode=(struct node *)malloc(sizeof(struct node));
     scanf("%d",&newnode->data);
     newnode->next=NULL;
     temp=head;
     newnode->next=temp;
     head=newnode;
     temp=head;
     printf("After adding the first node:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nEnter an element to insert at last:");
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    temp=head;
    printf("After inserting the node at last:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
    temp=head;
    printf("\nAfter removing the front node:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp=head;
    tail=temp;
    while(temp->next!=NULL)
    {
        tail=temp;
        temp=temp->next;
    }
    tail->next=NULL;
    free(temp);
    temp=head;
    printf("\nAfter removing the last node:");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }





}
