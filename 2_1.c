
#include<stdio.h>
int main()
{
	long int tp,tl,m,lm,im,w,lw,iw ;
	
	tp=80000;
	tl=(800*48);
	m=(800*52);
	lm=(800*35);
	im=(800*52)-(800*35);
	w=tp-m;
	lw= tl-lm;
	iw=w-lw;

	printf("Total Population is=%ld\n",tp);
	printf("Number of Literate are=%ld\n",tl);
	printf("Number of Men are=%ld\n",m);
    printf("Number of Literate Men are=%ld\n",lm);
    printf("Number of illiterate Men are=%ld\n",im);
    printf("Number of Women are=%ld\n",w);
    printf("number of Literate Women are=%ld\n",lw);
    printf("Number of illeterate Women are=%ld\n",iw);
	printf("23CE089_Ary");

	return 0;
}