#include<stdio.h>
void factorial();
int factorial1 ;
int main()
{

    factorial();
    printf("The factorial of given number is=%d",factorial1);
return 0;
}
void factorial()
{
    int factorial1 =1;
    int i,n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial1=(factorial1*i);
    }
}