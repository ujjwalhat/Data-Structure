#include<stdio.h>

int main()
{
    int arr[5]={0};
    for(int i=0;i<5;i++)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",&arr[i]);
    }
    return 0;
}