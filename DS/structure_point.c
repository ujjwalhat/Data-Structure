#include<stdio.h>

int main()
{
    struct points
    {
        int x;
        int y;
    };
    // struct points s1,s2,s3={10,20};
    // printf("enter the s1 s2 values\n");
    // scanf("%d%d%d%d",&s1.x,&s1.y,&s2.x,&s2.y);
    
    struct points p[3];
    initializer(p);
    display(p);
    return 0;
}
void initializer(struct points p[])
{
    for(int i=0;i<3;i++)
    {
        scanf("%d%d",&p[i].x,&p[i].y)
    }
}
void display(struct points p[])
{
    for(int i=0;i<3;i++)
        printf("x=%d y=%d\n,p")
}
