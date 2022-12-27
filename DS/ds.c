#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no. of elements.\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements.\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Max element is: %d",max);
    printf("\n");
    printf("This is made by Tanuja Rawat\nRoll No.:- 2100321530174 \n");
}
