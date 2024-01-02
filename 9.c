//(i)No arguments passed and no return value
#include<stdio.h>
void prime();
void main()
{
    prime();
}
void prime()
{
    int n,i,j,f=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {

        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("%d is not prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }

    printf("\n\n 23CE144_VISHV PATEL");
}
//(ii)No arguments passed but a return value
int prime();
int n;
void main()
{
    if(prime()==1)
    {
        printf("  is not prime number",n);
    }
    else
    {
        printf(" is a prime number",n);
    }
    printf("\n\n 23CE144_VISHV PATEL");
}
int prime()
{
int n,i,f=0;
printf("Enter a Number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    return f;
}
//(iii)Argument passed but no return value
void prime(int n,int i,int f);
void main()
{
int f,n,i=0;
printf("Enter a Number:");
    scanf("%d",&n);
    prime(n,i,f);
}
void prime(int n,int i,int f)
{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("%d is not prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }
    printf("\n\n 23CE144_VISHV PATEL");
}
//(iv)Argument passed and a return value
int prime(int);
int n;
void main()
{
    printf("Enter a Number:");
    scanf("%d",&n);
    if(prime(n)==1)

    {
        printf("%d is not prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }
    printf("\n\n 23CE144_VISHV PATEL");
}
int prime(int n)
{

    int i,f=0;

    for(i=2;i<n;i++)
    {

        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    return f;
}