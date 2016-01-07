#include <stdio.h>
#include <stdlib.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,a[10005],sum=0,i;
		scanf("%lld",&n);
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
		for(i=0;i<n/2;i++)
		{ sum+=(n-2*i-1)*(a[n-i-1]-a[i]);}
	
	printf("%lld\n",sum);}
	return 0;
}
