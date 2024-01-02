#include<stdio.h>
#include<math.h>
#define pai 3.14
int main ()
{
    float l,x,g,t;
    printf("enter value of length=");
    scanf("%f",&l);
    printf("enter value of gravity=");
    scanf("%f",&g);
    x=l/g;
    t=pai*2*sqrt(x);
    printf("total time is =%0.2f",t);
    //printf("\n23CS097_CS2");
    printf("\n23CE089_Ary");
    return 0;

}

