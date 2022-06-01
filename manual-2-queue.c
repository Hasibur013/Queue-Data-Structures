#include<stdio.h>
#include<stdlib.h>
#define size 5

int a[size],i,front=-1,rear=-1;

void enqueue(int val)
{
    if(rear==size-1)
        printf("\nQueue is full/overflow\n");
    else
    {
        if(rear+1==front)
            printf("Queue is full/overflow\n");
        else
        {
            front=0;
            rear++;
            a[rear]=val;
            printf("\n Inserted value= %d\n",a[rear]);
        }
    }
}
void dequeue()
{
    if(front==-1)
        printf("\n Queue is empty/underflow\n");
    else
    {
        printf("\n Deleted element= %d\n",a[front]);
        front++;
        if(front>rear)
        {
            rear=front=-1;
        }
    }
}
void display()
{
    if(rear==-1)
        printf("\n Queue is empty/underflow\n");
    else
    {
        printf("\n All element in the Queue:\n\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",a[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int val,ch;

    do
    {
        printf("\n Menu");
        printf("\n 1>> Enqueue");
        printf("\n 2>> Dequeue");
        printf("\n 3>> Display Queue");
        printf("\n 4>> Exit");
        printf("\n Enter Your choose: ");

        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter inserted value: ");
                scanf("%d",&val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choose");
                break;
        }
    }while(ch<=3);

    return 0;
}
