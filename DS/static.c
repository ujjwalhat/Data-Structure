#include<stdio.h>
int* square();
int main()
{
    int *p;
    p=square();
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*p);
        p++;
    }
    return 0;
}   
int* square()
{
    static int a[]={10,20,30,40,50};
    for(int i=0;i<5;i++)
    {
        a[i] = a[i]*a[i];
    }
    return &a[0];
}