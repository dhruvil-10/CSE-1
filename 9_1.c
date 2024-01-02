#include<stdio.h>
int factorial();
int main()
{
    factorial();
    return 0;
}
int factorial()
{
    int factorial=1,i,n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of given number is=%d",factorial);
}
