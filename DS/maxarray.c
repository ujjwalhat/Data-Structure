#include<stdio.h>

int main()
{
    int marks[5],max;
    for(int i=0;i<=5;i++)
    {
        printf("ENTER THE MARKS OF STUDENTS:");
        scanf("%d",&marks[i]);
    }
    float average=0;
    for(int i=0;i<5;i++)
    {
        average+=marks[i];
    }
    average=average/5;
     printf("the average is : %f \n",average);
    max = marks[0];
    
    for(int i=0;i<5;i++)
    {
        if(marks[i]>max)
        {
            max= marks[i];
        }
    }
    printf("%d",max);
    return 0;
}