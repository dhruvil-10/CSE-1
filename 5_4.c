#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,imaginary,root1,root2;
    int temp;
    printf("\nEnter The Value Of A : ");
    scanf("%f",&a);
    printf("Enter The Value Of B : ");
    scanf("%f",&b);
    printf("Enter The Value Of C : ");
    scanf("%f",&c);
    d=(b*b)-(4*a*c);
    printf("Value Of D is : %f\n",d);
    if(d>0)
    {
	temp=1;
    }
    else if(d<0)
    {
	temp=2;
    }
    else if(d=0)
    {
	temp=3;
    }
    switch(temp)
    {
	case 1:root1=(-b+(sqrt(d)))/(2*a);
    root2=(-b-(sqrt(d)))/(2*a);
    printf("\nRoot 1 : %f\n",root1);
    printf("\nRoot 2 : %f\n",root2);
	break;
	case 2:root1=root2=(-b)/(2*a);
	imaginary=(sqrt(-d))/(2*a);
	printf("\nRoot 1 = Root 2 : %f\n",root1);
	printf("Imaginary : %f\n",imaginary);
	break;
	case 3:root1=root2=(-b)/(2*a);
    printf("Root 1 : %f",root1);
    printf("Root 2 : %f",root2);
	break;
	}
    printf("\n23CE089_Ary");
return 0;
	}