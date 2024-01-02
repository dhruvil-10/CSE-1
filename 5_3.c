#include<stdio.h>
int main()
{

    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if ( year % 400==0 || (year % 4==0 && year % 100!=0))
    {
        printf("%d is leap year\n",year);
    }
    else {
        printf("%d is not a leap year ",year);
    }
    // else if(year%100==0)
    // {
    //     printf("%d is not a leap year.\n",year);
    // }
    // else if(year%4==0)
    // {
    //     printf("%d is leap year\n",year);
    // }   
    printf("\n23CE089_Ary");
    //printf("\n\n23CS089_CS2");
    return 0;
}