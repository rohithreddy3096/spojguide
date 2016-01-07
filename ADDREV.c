#include <stdio.h>
long long int rev(long long int n);
int main(void) {
long long int t,a,b,p;
	scanf("%lld\n",&t);
	while(t--)
	{ scanf("%lld %lld",&a,&b);
p=rev(a)+rev(b);
	printf("%lld",rev(p));
	printf("\n");}
		return 0;
}
long long int rev(long long int n)
{ long long int r=0;
while(n>0)
{r=r*10+(n%10);
n=n/10;}
return r;}
