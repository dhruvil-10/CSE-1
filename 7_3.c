#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],null[0][0]={0},i,j,k;
    printf("Enter the elements of matrix a:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix you entered is :\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
        }
    printf("Enter the elements of matrix b ");
    for(i=0;i<3;i++)
    {
            for(j=0;j<3;j++)
        {
            printf("Enter b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix you entered is :\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",b[i][j]);
            }
        printf("\n");
        }
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                {
                    for(k=0;k<3;k++)
                    {
                        null[i][j]+=(a[i][k]*b[k][j]);
                    }
                }
        }
    printf("The matrix multiplicated is :\n");
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",null[i][j]);
            }
        printf("\n");
        }
        printf("\n23CE089_Ary"); 
        return 0;
}
