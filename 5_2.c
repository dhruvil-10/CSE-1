#include<stdio.h>
#include<math.h>
int main ()
{
    int x1,x2,x3,y1,y2,y3,s1,s2,s3;
    printf("enter value of x1=");
    scanf("%d",&x1);
    printf("enter value of x2=");
    scanf("%d",&x2);
    printf("enter value of x3=");
    scanf("%d",&x3);
    printf("enter value of y1=");
    scanf("%d",&y1);
    printf("enter value of y2=");
    scanf("%d",&y2);
    printf("enter value of y3=");
    scanf("%d",&y3);
    s1=fabs(x2-x1)/(y2-y1);
    s2=fabs(x3-x2)/(y3-y2);
    s3=fabs(x3-x1)/(y3-y1);
    // s1=(y2-y1)/(x2-x1);
    // s2=(y3-y2)/(x3-x2);
    // s3=(y3-y1)/(x3-x1);
    if(s1==s2&&s2==s3)
    {
        printf("\npoint are colinear ");
    }
    else
    {
        printf("\npoint are not colinear ");
    }
        printf("\n23CE089_Ary");
    return 0;
}

