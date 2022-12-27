#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    int x = 1,y, value;
    struct node *front, *rear, *temp, *r;front=rear=NULL;
printf("enque opn in dequeue \n");
while(x==1)
{
    printf("want to enqueue at rear end?press2\n");
     printf("want to enqueue at front end?press3\n");
     scanf("%d",&y);

    while(x==2)
    {
         printf("enter at rear end\n");
         printf("enter the value to be enqueued\n");
         scanf("%d",&value);
         if(front==NULL)
         {
             r=(struct node*)malloc(sizeof(struct node));
             r->data=value;
             r->prev=NULL;
             r->next=NULL;
             front=rear=r;
         }
         else
         {
             if(rear->next=NULL)
             {
               r=(struct node*)malloc(sizeof(struct node));
               r->data=value;
               r->prev=rear;
               rear->next=r;
               front->prev=r;
               r->next=front;
               rear=r;
             }
             else
             {
                 r=(struct node*)malloc(sizeof(struct node));
                 r->data=value;
                 rear->next=r;
                 r->prev=rear;
                 r->next=rear->next;
                 rear=r;
                 front->prev=r;
             }
         }
         printf("want more value to enqueued at rear end? press2\n");
         scanf("%d",&value);
    }
    while(y==3)
    {
         printf("enter at front end\n");
         printf("enter the value to be enqueued\n");
         scanf("%d",&value);
          if(front==NULL)
         {
             r=(struct node*)malloc(sizeof(struct node));
             r->data=value;
             r->prev=NULL;
             r->next=NULL;
             front=rear=r;
         }
         else
         {
             if(front->next==NULL)
             {
                r=(struct node*)malloc(sizeof(struct node));
               r->data=value;
               r->next=front;
               front->prev=r;
               front=r;
               front->prev=r;
               rear->next=front;
             }
             else
             {
               r=(struct node*)malloc(sizeof(struct node));
               r->data=value;
               r->next=front;
               front->prev=r;
               front=r;
               front->prev=rear;
               rear->next=front;
             }
         }
         printf("want to more value to be enqueued at front end? press3\n ");
         scanf("%d",&y);
    }
    printf("want more value to enqueued? press1\n");
    scanf("%d",&x);
}
int count=0;
struct node *p=NULL;
temp=front;
while(temp!=p)
{
    count++;
    printf("%d<-->",temp->data);
    temp=temp->next;
    p=front;
}
//printf("\n number of nodes in dequeued in ");
printf("\n number of nodes in the dll is %d", count);
printf("%d\n",count);
return 0;
}