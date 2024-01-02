#include<stdio.h>
int main()
{
    int i,j,k,l,tmp,diff,choice;
    char s1[100],s2[100];
    printf("\n1:Length of a string");
    printf("\n2:Reverse string");
    printf("\n3:Compare two strings");
    printf("\n4:Copy one string into another string");
    printf("\n5:Concatenate two strings");
    printf("\n6:Exit");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("\nEnter string: ");
            getchar();
            gets(s1);
            i=0;
            while(s1[i])
            {
                i++;
            }
            printf("Length=%d",i);
            break;
        }
        case 2:
        {
            printf("\n\nEnter String: ");
            getchar();
            gets(s1);
            l=strlen(s1);
            for(i=0;i<l/2;i++)
            {
                tmp=s1[i];
                s1[i]=s1[l-i-1];
                s1[l-i-1]=tmp;
            }
            printf("reverse string: %s",s1);
            break;
        }
        case 3:
        {
            printf("Enter first string: ");
            getchar();
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
            {
                diff=s1[i]-s2[i];
                if(diff!=0)
                {
                break;
                }
            }
            if(diff>0)
            {
                printf("\nFirst String is larger.");
            }
            else if(diff==0)
            {
                printf("\nBoth strings are same.");
            }
            else
            {
                printf("\nSecond String is larger.");
            }
            break;
        }
        case 4:
        {
            printf("Enter First String:");
            getchar();
            gets(s1);
            for(i=0;s1[i]!='\0';i++)
            {
                s2[i]=s1[i];
            }
            s2[i]='\0';
            printf("\nFirst string:%s",s1);
            printf("\nSecond string:%s",s2);
            break;
        }
        case 5:
        {
            printf("Enter First String:");
            getchar();
            gets(s1);
            printf("Enter Second String:");
            gets(s2);
            for(i=0;s1[i]!='\0';i++);
            for(j=0;s2[j]!='\0';j++)
            {
                s1[i]=s2[j];
                i++;
            }
            s1[i]='\0';
            printf("concat string: %s",s1);
            break;
        }
        case 6:
        {
            printf("\nEnter any key for exit");
            break;
        }
        default :
        {
            printf("\nyour choice is invalid choice");
            break;
        }
    }
    printf("\n23CS061_CS2");
    return 0;
}