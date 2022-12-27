#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *start, *temp, *r;
    start = NULL;

    int x = 1, value;
    
    while (x == 1)
    {
        printf("enter the value to be inserted\n");
        scanf("%d", &value);

        r = (struct node *)malloc(sizeof(struct node));
        r->data = value;

        if (start == NULL)
        {
            r->link = start;
            start = r;
        }
        else
        {
        
            r->link = start;
            start = r;
        }
        printf("want to enter more values in ll? enter 1\n");
        scanf("%d", &x);
    }

    while (x == 1)
    {
        printf("enter the value to be deleted\n");
        scanf("%d", &value);

        r = (struct node *)malloc(sizeof(struct node));
        r->data = value;

        if (start == NULL)
        {
            r->link = start;
            start = r;
            break;
        }
        else
        {
            temp = start;
            start = start->link;
            free(temp);
        
        }
        printf("want to delete more nodes in ll? enter 1\n");
        scanf("%d", &x);
    }


    temp = start;
    int count = 0;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->link;
        count++;
    }

    printf("%d are the number of nodes in ll.\n", count);
    

    return 0;
}