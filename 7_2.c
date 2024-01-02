#include<stdio.h>
void main ()
{
int A[20],B[20],C[40],n1,n2,i,j=0,temp;
printf("Enter size of array A :");
scanf("%d",&n1);
printf("Enter size of array B :");
scanf("%d",&n2);
for(i=0;i<n1;i++)
{
    printf("Enter A[%d]:",i+1);
    scanf("%d",&A[i]);
}
for(i=0;i<n2;i++)
{
    printf("Enter B[%d]:",i+1);
    scanf("%d",&B[i]);
}
for(i=0;i<(n1+n2);i++)
{
    if(i<n1)
    {
        C[i]=A[i];
    }
    else
    {
        C[i]=B[i-n1];
    }
}
for(j=0;j<n1+n2-1;j++)
{
    for(i=0;i<n1+n2-1;i++)
    {
        if(C[i]>C[i+1])
        {
            temp=C[i];
            C[i]=C[i+1];
            C[i+1]=temp;
        }
    }
}
for(i=0;i<n1+n2;i++)
    {
        printf(" %d ",C[i]);
    }
printf("\n23CS097_CS2");
}
//a b c d
//1 2 3
//e f
//4