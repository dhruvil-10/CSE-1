#include<stdio.h>
struct book_detail
{
    char book_title[10];
    char author_name[10];
    float amount;
}b1;
void getdata(struct book_detail b1);
main()
{
    printf("Enter Title of book:\n");
    scanf("%s",&b1.book_title);
    printf("Enter Author Name:\n");
    scanf("%s",&b1.author_name);
    printf("Enter Amount of Book:\n");
    scanf("%f",&b1.amount);
    getdata(b1);
}
void getdata(struct book_detail b1)
{
    printf("\nTitle of book:%s",b1.book_title);
    printf("\nAuthor Name:%s",b1.author_name);
    printf("\nAmount of Book:%.2f",b1.amount);
    printf("\n23CS061_CS2");
}