
    printf("deque opn in circular queue via dll\n");
    x=1;
    while (x == 1)
    {
        printf("enter the value to be enqueued\n");
        scanf("%d", &value);

        if (front == NULL)
        {
           printf("circular queue is empty\n");
           break;
        }
        else
        {
            if (front==rear)
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
