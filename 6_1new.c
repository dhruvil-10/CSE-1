#include<stdio.h>
#include<math.h>
int main ()
{
int n,q,a,b,c,d,i,y;
    printf("\n1.number is a prime number or not");
    printf("\n2.number is a armstrong or not");
    printf("\n3.number is a perfect or not");
    printf("\n4.exit");
    printf("\nenter a choice (1-4): ");
    scanf("%d",&n);
    switch (n)
{
    case 1:
    printf("\nenter a number :");
    scanf("%d",&q);
    a=0;
    for (int i=2;i<q;i++)
    {
        if (q%i==0)
            {
                a=1;
                break; 
            } 
    }
        if (q==1)
            {
                printf("number is not prime and composit");
            }
            else if(q==0)
            {
                printf("number is not prime and composite");
            }
            else if (a==0)
            {
                printf("number is a prime");
            }
            else 
            {
                printf("number is a not  prime ");
            }   
    break;
    case 2:
    printf("enter a number :");
    scanf("%d",&q);
    a=0;//sum
    c=q;//dummy
    d=q;//dummy
    y=0;//length 
    while(q!=0)
    {
        q=q/10;
        ++y;
    }
    while(c!=0)
    {
        b=c%10;
        i=pow(b,y);
        c=c/10;
        a=a+i;
    }
    if(d==a)
    {
        printf("%d is an armstrong number",d);
    }
    else if (d==153)
    {
        printf("%d is an armstrong number",d);
    }
    else
    {
        printf("%d is not an armstrong number ",d);
    }
    break;
    case 3:
    printf("enter a number :");
    scanf("%d",&q);
    a=1;
    do
    { 
        if(q%a==0)
        c=c+a;
        a++;
    }
    while (a<q);
    if(c==q) { printf("%d is a perfect number. ",q);}
    else {printf("%d is not a perfect number.",q); }
    break;
    case 4:
    printf("by");
    return 0;
    break;
    default: printf("invalide choise");
}       
        printf("\n23CE089_Ary");
        return 0;
}