#include<stdio.h>
int main ()
{
    int q;
    float price,bill;
    printf("enter price of item=");
    scanf("%f",&price);
    printf("enter quantity of item=");
    scanf("%d",&q);

bill=q*price;
        if(q>1000)
        {
            printf("your bill with discount =%f",bill*0.9);
            goto l1;
        }
            printf("your bill is =%0.1f",bill);
            l1:
    printf("\n23CE089_Ary");
    //printf("\n23CS089_CS2");
    return 0;
}