#include<stdio.h>
int main ()
{
    int a=21,u,c,s;
    while(1)
    {
        printf("remaining sticks are %d\n how many stick you want to pick=",a);
        scanf("%d",&u);
        if(u>=1&&u<=4)                               
        {
        a-=u;
        c=5-u;
        a=a-c;
        printf("computer pick %d sticks\n",c);
            if (a==1)
            {
                printf("you lost game.");
                break;
            }
        }
        else {
            printf("you can not pick more than 5 sticks\n choise again.");
        }
    }
    printf("\n23CE089_Ary");
    return 0;
}