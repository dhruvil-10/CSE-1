#include<stdio.h>
int main ()
{
    float da,hra,ma,ta,pf,it,bs,gs,ns;

    printf("enter client basic salary=");
    scanf("%f",&bs);
    da=bs*(0.7);
    hra=bs*(0.07);
    ma=bs*(0.02);
    ta=bs*(0.04);
    pf=bs*(0.12);
    gs=bs+da+hra+ta+ma;
    ns=gs-(pf+it);
    printf("\nDA of basic salary is=%f",da);
    printf("\nHRA of basic salary is=%f",hra);
    printf("\nMA of basic salary is=%f",ma);
    printf("\nTA of basic salary is=%f",ta);
    printf("\nPF of basic salary is=%f",pf);
    printf("\nGross Salary of basic salary is=%f",gs);
    printf("\nNet Salary of basic salary is=%f",ns);
    printf("\n23CS097_CS2");
    return 0;
}
