#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
int main()
{
    int x =1,y,value;
    struct node *front,*rear,*temp,*r;
    front=rear=NULL;

    printf("enque opn in circular queue via dll\n");
    while (x == 1)
    {
        printf("enter the value to be enqueued at rear end?press 2\n");
        printf("enter the value to be enqueued at front end? press 3\n");
        scanf("%d", &y);
        while (y==2)
        {
            printf("enter at rear end\n");
            printf("enter the value to be enqueued\n");
            scanf("%d",&value);
        
        if (front == NULL)
        {
            r = (struct node *)malloc(sizeof(struct node));
            r->data = value;
            r->prev = NULL;
            r->next = NULL;
            front = rear =r;
        }
        else
        {
            if (rear->next == NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data= value;
                r->prev = rear;
                rear->next  = r;
                front -> prev=r;
                r->next = front;
                rear = r;
            }
            else
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data= value;
                rear->next  = r;
                r->prev = rear;
                r->next= rear->next;                
                rear = r;
                front -> prev=r;
            }
        }    
        printf("want more nodes to be enqueued?press 2\n");
        scanf("%d", &y); 
        }
    }

    while (y==2)
        {
            printf("enter at front end\n");
            printf("enter the value to be enqueued\n");
            scanf("%d",&value);
        
        if (front == NULL)
        {
            r = (struct node *)malloc(sizeof(struct node));
            r->data = value;
            r->prev = NULL;
            r->next = NULL;
            front = rear =r;
        }
        else
        {
            if (rear->next == NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data= value;
                r->next = front;
                front->prev = r;
                front = r;
                front -> prev=rear;
                rear->next  = front;
            }
            else
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data= value;
                r->next  = front;
                front->prev=r;
                front=r;
                front->prev=rear;
                rear->next= front;
            }
        }    
        printf("want more nodes to be enqueued?press 3\n");
        scanf("%d", &y); 
        }
        printf("want more nodes to be enqueued?press 3\n");
        scanf("%d", &x);
    }

    int count=0;
    struct node *p=NULL;
    temp= front;
    
    while (temp != p)
    {
        count++;
        printf("%d    <-->   ", temp->data);
        temp = temp->next;
        p=front;
    }

    printf("\n");
    
    printf("deque opn in circular queue via dll\n");
    x=1;
    while (x == 1)
    {
        printf("enter the value to be dequeued\n");
        scanf("%d", &value);

        if (front == NULL)
        {
           printf("circular queue is empty\n");
           break;
        }
        else
        {
            if (front->next == NULL)
            { 
                temp = front;
                front = rear = NULL;
                free(temp);
            }
               
            else
            {
                temp = front;
                front = front -> next;
                rear -> next = front;
                front ->prev = rear;
                free(temp);
            }
        }    
        printf("want more nodes to be dequeued?press 1\n");
        scanf("%d", &x); 
    }

    int count=0;
    p=NULL;
    temp = front;
    while (temp != p)
    {
        printf("%d    <-->   ", temp->data);
        temp = temp->next;
        p=front;
        count++;
    }

    printf("\n number of nodes in circularn queue via dll is \n");
    printf("%d\n",count);


    return 0;
}