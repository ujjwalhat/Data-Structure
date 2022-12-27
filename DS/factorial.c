#include<stdio.h>
int fact(int);

int main()
{
    int num,f;
    printf("enter the number to be factorial");
    scanf("%d",&num);
    f=fact(num);
    printf("%d\n",f);
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
