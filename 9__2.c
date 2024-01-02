#include<stdio.h>
#include<math.h>
float sp(float,float,float);
float area(float,float,float,float);
int main()
{
    float a,b,c;
    float k,l,s;
    printf("Enter A:");
    scanf("%f",&a);
    printf("Enter B:");
    scanf("%f",&b);
    printf("Enter C:");
    scanf("%f",&c);
if(((a+b)>c&&(b+c)>a&&(c+a)>b)==0)
{
    printf("This is not Triangle.");
}
else
{
    k=sp(a,b,c);
    l=area(a,b,c,s);
    printf("S=%f\n",k);
    printf("A=%f",l);
    printf("\n\n23CS061_CS2");
}
}
float sp(float a,float b,float c)
{
    float s;
    s=(a+b+c)/2;
    return s;
}
float area(float a,float b,float c,float s)
{
    float k,area;
    area=sqrt(k*(k-a)*(k-b)*(k-c));
    return area;
}
