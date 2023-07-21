#include<stdio.h>
int size;
int element,top=-1,stack[size];

int main()
{

    int size;
    printf("Enter the size of stack:");
    scanf("%d",&size);
    push();

}
void push()
{
   if(top==size-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d",&element);
        top=top+1;
        stack[top]=element;
    }
}

