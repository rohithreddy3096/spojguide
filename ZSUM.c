#include <stdio.h>
#define MOD 10000007
long long int p(long long int base,long long int exp,long long int modu)
{ 
   long long int res=1;
   base=base%modu;
   while(exp>0)
   { 
   	 if(exp%2==1)
   	 res=(res*base)%modu;
   	 exp=exp>>1;
   	 base=(base*base)%modu;
   }
   return res;}
int main(void) {
	// your code goes here
	long long int n,k,ans;
	scanf("%lld %lld",&n,&k);
	while(n)
	{  
	  long long int a,b,c,d,ans;
	  a=p(n,k,MOD)%MOD;
	  b=p(n,n,MOD)%MOD;
	  c=2*p((n-1),k,MOD)%MOD;
	  d=2*p((n-1),n-1,MOD)%MOD;
	  ans=((a+b)%MOD+(c+d)%MOD)%MOD;
	  printf("%lld\n",ans);
	  scanf("%lld %lld",&n,&k);}
	return 0;
}
