#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
int factorial(n)
{
    int factorial=1,i;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of given number is=%d",factorial);
    return (factorial);
}

