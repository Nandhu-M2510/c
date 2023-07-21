#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL,*temp,*newnode,*tail,*temp1,*temp2;
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

    temp=head;
    temp1=head;
    int swap;
        if(head==NULL)
        {
            printf("%d",head->data);
        }
        else
        {
            while(temp!=NULL)
            {
                temp1=temp->next;
                while(temp1!=NULL)
                {
                    if(temp->data < temp1->data)
                    {
                        swap=temp->data;
                        temp->data=temp1->data;
                        temp1->data=swap;
                    }
                    temp1=temp1->next;
                    }
                     temp=temp->next;
            }

        }


    printf("The elements are:");
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
