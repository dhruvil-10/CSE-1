#include<stdio.h>
int main ()
{
    int count,y=10,p=20;
    printf("before execution: \nyellow ball =%d\npink ball=%d ",y,p);
    count=++y + y++ + --y + ++p - --p  - --p;
    printf("\n\nafter execution: \nyellow ball =%d\npink ball=%d ",y,p);
    
    printf("\n23CE089_Ary");
    //printf("\n23CS097_CS2");
    return 0;

}