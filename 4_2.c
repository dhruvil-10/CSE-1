#include<stdio.h>
int main ()
{
    float p,dis;
    int q;
        printf("\nenter quantity :");
        scanf("%d",&q);
        printf("\nenter price :");
        scanf("%f",&p);
        if(q>1000)
        {
            dis=q*p*(0.90);
            printf("your bill is=%f",dis);
            goto l1;
        }
        printf("your bill is =%f",q*p);
        l1:
        printf("\n23CE089_Ary");
       //printf("\n23CS089_CS2");
return 0;
}
