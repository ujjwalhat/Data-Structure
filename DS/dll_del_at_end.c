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
    int x = 1, value, y;
    struct node *start, *r, *temp;
    start = NULL;

    printf("inserting node in the dll\n");
    while (x == 1)
    {
        printf("for inserting at end, press 2\n");
        printf("for inserting in middle ,press 3\n");
        scanf("%d", &y);

        while (y == 2)
        {
            printf("enter the values to be inserted\n");
            scanf("%d", &value);

            if (start == NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next = NULL;
                start = r;
            }
            else
            {
                temp = start;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = temp;
                temp->next = r;
                r->next = NULL;
            }
            printf("want more nodes to be inserted at last ?press 2\n");
            scanf("%d", &y);
        }
        while (y==3)
        {
            printf("insert in middle\n");
            printf("enter the value to be inserted\n");
            scanf("%d",&value);

            if (start==NULL)
            {
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->prev = NULL;
                r->next = NULL;
                start=r;
            }
            else
            {
                temp=start;
                int v;
                printf("enter the value after which insert has to be done\n");
                scanf("%d",&v);
                while (temp->data!=v)
                {
                    temp=temp->next;
                }
                r = (struct node *)malloc(sizeof(struct node));
                r->data = value;
                r->next = temp->next;
                temp->next->prev = r;
                r->prev = temp;
                temp->next=r

            }
            printf("want more to be inserted middle?press 3\n");
            scanf("%d",&y);   
        }
        printf("want more nodes to be inserted at last ?press 1\n");
        scanf("%d", &x);
    }
    temp = start;
    int count = 0;
    while (temp != NULL)
    {
        printf("%d    <-->   ", temp->data);
        temp = temp->next;
        count++;
    }

    printf("\n number of nodes in dll is %d\n", count);



    x=1;
    while (x == 1)
    {
        printf("for deleting at end, press 2\n");
        printf("for deleting in middle ,press 3\n");
        scanf("%d", &y);

        while (y == 2)
        {
            printf("delete at last or end\n");

            if (start == NULL)
            {
                printf("dll is empty\n");
                break;
            }
            else
            {
                temp = start;
                while (temp->next->next != NULL)
                {
                    temp = temp->next;
                }
                r= temp->next;
                temp->next = NULL;
                free(r);
            }
            printf("want more nodes to be deleted at last ?press 2\n");
            scanf("%d", &y);
        }

        while (y == 3)
        {
            printf("delet in middle\n");
            printf("enter th evalue to be deleted\n");
            scanf("%d",&value);
            if (start == NULL)
            {
                printf("dll is empty\n");
                break;
            }
            else
            {
                temp = start;
                while (temp->next->data != NULL)
                {
                    temp = temp->next;
                }
                r= temp->next;
                temp->next = r->next;
                r->next->prev = temp;
                free(r);
            }
            printf("want more nodes to be deleted at last ?press 3\n");
            scanf("%d", &y);

        printf("want more nodes to be inserted at last ?press 1\n");
        scanf("%d", &x);
    }


    temp = start;
    count=0;
    while (temp!=NULL)
    {
        printf("%d  <--> ",temp->data);
        temp = temp->next;
        count++;
    }
    
    printf("\nnumber of nodes in dll is %d\n",count);

    return 0;
}