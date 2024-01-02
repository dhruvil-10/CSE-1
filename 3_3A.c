#include<stdio.h>
int main ()
{
    int a,b,temp;
    printf("enter value of a=");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);
    printf("before swapping a=%d, b=%d",a,b);
    temp=a;
    a=b;
    b=temp;

    printf("\nafter swapping a=%d, b=%d ",a,b);

    printf("\n23CE089_Ary");
    

    return 0;
}