//*a=a[0]
//*(P+i)=*(s+i)=s[i]
//p+i=s+i=&s[i]
int main()
{
    int s[10],i,*p;
    int diss=0,fi=0,pass=0,fail=0,n;
    p=s;
    printf("Enter Number of Students:");
    scanf("%d",&n);
    printf("Enter marks of %d Students:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",s+i);
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=70)
        {
            diss++;
        }
        else if(*(p+i)>=60 && *(p+i)<=69)
        {
            fi++;
        }
        else if(*(p+i)>=40 && *(p+i)<=59)
        {
            pass++;
        }
        else if(*(s+i)<40)
        {
            fail++;
        }
    }
    printf("DISTINCTION=%d \nFIRST CLASS=%d \nPASS=%d \nFAIL=%d",diss,fi,pass,fail);
    printf("\n\n 23CS061_CS2");
    return 0;
}