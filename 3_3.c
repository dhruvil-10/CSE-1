#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter a value of a=");
    scanf("%d",&a);
    printf("enter a value of b=");
    scanf("%d",&b);
    printf("before swapping a=%d ,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping a=%d ,b=%d ",a,b);

    
    printf("\n23CE089_Ary");
    //printf("\n23CS097_CS2");
    return 0;
}
