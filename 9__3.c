bin(int);
main()
{
int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("%d",bin(n));
    printf("\n23CS061_CS2");
}
bin(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
    return(n%2)+10*bin(n/2);
    printf("\n23CS061_CS2");
    }
}