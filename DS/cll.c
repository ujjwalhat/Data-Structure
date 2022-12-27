#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    int x=1,y,value;
    struct node *front,*rear,*temp,*r;
    front=rear=NULL;

    printf("Enqueue operation in dequeue via cll\n");
     while(x==1)
     {
        printf("enter the value to be enqueued\n");
        scanf("%d",&value);
         printf("want to enqueue at rear end? press 2\n");
         printf("want to enter at front end?press 2\n");

     }
     while(y==2)
     {
         if(front==NULL)
         {
             r = (struct node*)malloc(sizeof(struct node));
             r->data = value;
             r->link=NULL;
             front=r;
             rear=r;
         }
         else
         {
             if(front->link==NULL)
             {
                r = (struct node*)malloc(sizeof(struct node));
                r->data = value;
                rear->link=r;
                rear=r;
                rear->link=front;

             }
             else
             {
                 r = (struct node*)malloc(sizeof(struct node));
            r->data=value;
            r->link  = rear->link;
            rear->link = r;
            rear=r;
             }

         }
         printf("want to enter more enqueued at rear end? press 2/n");
         scanf("%d",&value);
         if(front==NULL)
         {
             r = (struct node*)malloc(sizeof(struct node));
             r->data=value;
            r->link  = rear->link;
            rear->link = r;
            rear=r;
         }
         else
         {
            if(rear->link==NULL)
             {
                r = (struct node*)malloc(sizeof(struct node));
                r->data = value;
                rear->link=front;
                rear=r;
                rear->link=front;

         }
         else
         {
           r = (struct node*)malloc(sizeof(struct node));
            r->data=value;
            rear->link=front;
                front=r;
                rear->link=front;
         }
     }
     printf("want to more enqueued at front end ? press 3\n");
     scanf("%d",&y);
}
printf("want to more value to enqueue? press 1\n");
scanf("%d",&x);

temp=front;
int count = 0;
struct node *p=NULL;

while(temp!=p)
{
    printf("%d->",temp->data);
    p=front;
    temp=temp->link;
    count++;
}
printf("\n no. of nodes in dequeue is %d\n",count);
return 0;
}