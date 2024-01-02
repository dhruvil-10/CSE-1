#include<stdio.h>
int factorial(int);
int main()
{
    int n,ans;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    ans=factorial(n);
    printf("The factorial of given number is=%d",ans);
return 0;
}
int factorial(n)
{
    int factorial=1,i;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
return factorial;
}

