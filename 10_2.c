#include<stdio.h>
union library
{
    int accession_number;
    char title[10];
    char author_name[10];
    float price;
    int flag;
}b1;
main()
{
    printf("Enter accession number:\n");
    scanf("%d",&b1.accession_number);
    printf("accession number :%d\n",b1.accession_number);
    printf("Enter Title of the Book:\n");
    scanf("%s",&b1.title);
    printf("title:%s\n",b1.title);
    printf("Enter Author Name:\n");
    scanf("%s",&b1.author_name);
    printf("autor name:%s\n",b1.author_name);
    printf("Enter Price of the Book:\n");
    scanf("%f",&b1.price);
    printf("price:%f\n",b1.price);
    printf("flag = 1 if the book is issued, flag = 0 otherwise:\n");
    scanf("%d",&b1.flag);
    if(b1.flag==0)
    {
        printf("Book is not issued");
    }
    else
    {
        printf("Book is issued");
    }
    printf("\n23CE089_Ary");
}