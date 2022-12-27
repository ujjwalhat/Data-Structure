#include<stdio.h>
# define n 6

int main()
{
 int i,bsearch,mid;
 int up=n-1,low=0;
int arr[6];
    for(int i=0;i<6;i++)
    {
        printf("enter the value in array ");
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&bsearch);


  for(i=0;i<n;i++)
  {
   while(low<up)
   {
    mid=(low+up)/2;
    if(arr[mid]==bsearch)
    {
     printf("%d found at position %d\n",bsearch,mid);
     break;
    }
    else{
       if(arr[mid]>bsearch)
       {
           up=mid;
       }
       else
       {
        low=mid+1;
       }
    }
   }
    break;
     if(up>mid)
   {
         printf("element not found");

   }
  }

   return 0;


}
