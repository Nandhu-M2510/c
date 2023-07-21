#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;
}*head,*temp,*newnode,*tail;
int main()
{
    int a,i,count=0,search,flag=0;
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
    printf("Displaying all the data:");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        count++;
        temp=temp->next;
    }
    printf("\n%d",count);
    printf("\nEnter an element to search:");
    scanf("%d",&search);
    temp=head;
    while(temp!=NULL)
    {
       if(temp->data==search)
       {
           flag++;
       }
       temp=temp->next;
    }
    if(flag>0)
    {
        printf("Found");
    }
    else
    {
        printf("Not found");
    }
    printf("\nDisplaying the odd or even");
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            printf("\nEven");

        }
        else
        {
            printf("\nodd");

        }
        temp=temp->next;
    }


}

