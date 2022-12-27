// #include<stdio.h>

// int main()
// {
//     struct
//     return 0;
// }
#include<stdio.h>

int main()
{
    struct stu
    {
        char name[20];
        int age;
    };

    struct stu s1,s2,s3,*s;
    s=&s3;
    scanf("%s%d",&(s->name),&(s->age));
    printf("%s%d\n",s->name,s->age);
    printf("Address of s3=%u and addeess of *s =%u\n",&s3,&s);
    printf("value stored in *s=%u\n",s);

    return 0;
}