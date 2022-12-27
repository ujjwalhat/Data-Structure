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

    return 0;
}