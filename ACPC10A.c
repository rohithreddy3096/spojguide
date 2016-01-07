#include <stdio.h>

int main(void) {
	
long int a,b,c;
	scanf("%ld %ld %ld\n",&a,&b,&c);
	
	while(1)
	{if(a==0&&b==0&&c==0)
	{break;}
	
	else if(b*b==c*a)
	{
		printf("GP %ld\n",(c*(c/b)));}
	else
	{printf("AP %ld\n",(c+(c-b)));}
	scanf("%ld %ld %ld",&a,&b,&c);}
	return 0;}
	
	
