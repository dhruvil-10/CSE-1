#include<stdio.h>
int main()
{
	int i=1,j,k,n,x;
	printf("1st design\n");
	printf("2nd design\n");
	printf("3rd design\n");
	printf("\nEnter your choice:");
	scanf("%d",&x);
	switch(x)
	{
	case 1:
    printf("Enter value of n:");
	scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
		for(j=1;j<=i;j++)
		{
			printf("*");
			//printf("%d ",j%2);
		}
	printf("\n");
	}
	break;
	case 2:
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
        for(k=n;k>i;k--)
		{
            printf("  ");
        }
        for (j=1;j<=i;j++) 
		{
            printf(" %d",j);
        }
		printf("\n");
    }
	break;
	case 3:
	printf("Enter value of n:");
	scanf("%d",&n);
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=n-i+1);
		j=1;
	do
	{
		printf("%c",j+64);
		j++;
	}while(j<=i);
		j=i-1;
		do
		{
			if(j==0)
			{
				printf(" ");
			}
			else
			{
			printf("%c",j+64);
			j--;
		}
		}while(j>=1);
		printf("\n");
		i++;
	}while(i<=n);
	break;
	default: printf("invalid disign");
	}
	printf("\n23CE089_Ary");
	return 0;
}
