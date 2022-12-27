#include<stdio.h>
void square (int *);
int main()
{
    int a[]={10,20,30,40,50};
    int i,*p;
    p=a;
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    //call by reference//
    square(&a);
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void square(int *ptr)
{
    for(int i=0;i<5;i++)
    {
        *ptr = *ptr**ptr;
        ptr++;
        
    }
}