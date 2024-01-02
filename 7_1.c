#include<stdio.h>
void main ()
{
    int num[25],i,pos=0,neg=0,odd=0,even=0;
    for(i=0;i<25;i++)
    {
        printf("enter a[%d]=",i+1);
        scanf("%d",&num[i]);
        if(num[i]>=0)
            pos++;
        else
            neg++;
        if(num[i]%2==0)
            even++;
        else
            odd++;
    }
printf("\n there are %d Positive number ",pos);
printf("\n there are %d Negative number ",neg);
printf("\n there are %d Odd number ",odd);
printf("\n there are %d Even number ",even);
printf("\n\n23CE097");
}



