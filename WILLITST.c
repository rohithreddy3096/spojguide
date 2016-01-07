#include <stdio.h>
int two(unsigned long long int n);
int main(void) { 
unsigned long long int n;
int i;
	
	scanf("%llu",&n);
	i=two(n);
	if(i==1)
	printf("TAK");
	else
	printf("NIE");
	return 0;
}
int two(unsigned long long int n)
{  while(n>1)
   { if(n%2==0)
     n=n/2;
     else 
     return -1;}
     if(n==1)
     return 1;}
