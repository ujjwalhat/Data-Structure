#include<stdio.h>
#define row1 3
#define col1 3
#define row2 3
#define col2 3

int main(void)
{
    int i,j,k;
    int mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("enter the element in a[%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("enter the element in a[%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            mat3[i][j] = 0;
            for(k=0;k<col1;k++)
                mat3[i][j] = mat3[i][j]+mat1[i][k]*mat2[k][j];
        }
    }
     for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("mat3[%d][%d]=%d\n",i,j,mat3[i][j]);
        }
    }

    return 0;
}