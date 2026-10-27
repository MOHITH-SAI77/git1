
#include<stdio.h>
#include<stdlib.h>

int*stack;
int top=-1;
int capacity=2;

int is empty()
{
    if(top=-1)
        return 0;
    else
        return 0;    
}
void push()
{
    int item;
    int*temp;

    printf("enter the element to push");
    scanf("%d",&item);

    if(isFUll())
    {
        int newcapacity=capacity*2;
        temp=realloc(stack,newcapacity*sizeof(int));

        if(temp=NULL)
        {
            printf("memory allocation failed!\n");
            return;
        }
        stack=temp;
        capacity=newcapacity;
        printf("stack capacity increasedvto %d\n",capacity);
    }
    top++;
    stack{top}=item;
    printf("%d pushed into the stack \n",item;)

}
void pop()
{
    if(isempty())
    {
        printf("stack overflow!\n");
    }
    else{
        printf("popped element: %d\n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(isempty(1))
    {
        printf("stack is empty.\n");
    }
    else
    {
        printf("stack elements are:\n");

        for(i=top;i>0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int main()
{
    int choice;
    stack=malloc(capacity*sizeof(int));

    if(stack==NULL)
    {
        printf("memory allocation failed!\n");
        return 1;
    }
    do
    {
        printf("\n--")
    }
}