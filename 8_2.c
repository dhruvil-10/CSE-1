#include<stdio.h>
#include<string.h>
int main()
{
    char string[5][20], dummy[20];
    int i=0, j=0;
    printf("Enter name of 5 students:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter name of student %d: ",i+1);
        gets(string[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(string[i],string[j])>0)
            {
                strcpy(dummy,string[i]);
                strcpy(string[i],string[j]);
                strcpy(string[j],dummy);
            }
        }
    }
    printf("String in Alphabetical order are:\n");
    for(i=0;i<5;i++)
    {
        puts(string[i]);
    }
    printf("\n23CE089_Ary");
    return 0;
}
