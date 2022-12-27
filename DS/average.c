#include<stdio.h>

int main()
{
    int marks[5];
    for(int i=0;i<=5;i++)
    {
        printf("ENTER THE MARKS OF STUDENTS:");
        scanf("%d",&marks[i]);
    }
    float average=0;
    for(int i=0;i<=5;i++)
    {
        average+=marks[i];
    }
    average=average/5;
    printf("your class average is: %f",average);
    return 0;
}   