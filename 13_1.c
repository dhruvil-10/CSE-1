#include<stdio.h>
main()
{
    int n,i,*p,sum=0,avg;
    printf("Enter n:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("Enter Numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(*p+i);
    }
    printf("\nSum=%d",sum);
    avg=sum/n;
    printf("\nAverage=%d",avg);
    free(p);
    printf("\n23CS061_CS2");
}