#include<stdio.h>
main()
{
    char *p;
    p=(char*)calloc(15,sizeof(char));
    strcpy(p,"Institute:");
    p=realloc(p,25);
    strcat(p," CSPIT");

    printf("%s",p);
    printf("\n23CS061_CS2");
}