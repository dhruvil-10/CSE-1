#include<stdio.h>
#include<ctype.h>
int main()
{
    
    char a;
    printf("\nEnter Anything : ");
    a= getchar();
    if(isdigit(a))
    {
    printf("The Input is a Digit\n");  
    //printf("The Input is Digit And Alphanumeric\n");
    }
    else if(isalpha(a))
    {
        printf("\nThe Input is an Alphabet\n");
        if(islower(a))
        {
        printf("The given input is in lower case\n");
        printf("The Upper Case of input is %c",toupper(a));
        }
    else if(isupper(a))
    {
        printf("The given input is in Upper Case");
        printf("\nThe Lower Case of input is %c",tolower(a));
    }
    }
    else if(isprint(a))
    {
        if(ispunct(a))
        {
        printf("The given input is a Punctuation mark");
        }
        else if(isspace(a))
        {
        printf("It is a White Space Character");
    }
    else if(isalnum(a))
    {
        printf("The Input is Alphanumeric");
    }
    }
    printf("\n23CE089_Ary");
    return 0;
}