#include<stdio.h>
#include<inttypes.h>

uint64_t gcd(a,b)
{
	uint64_t gcd_ans;
	if(b==0)
		gcd_ans = a;
	else
		gcd_ans = gcd(b,a%b);
	return gcd_ans;
}

int main()
{
	uint64_t a,b;
	uint64_t tmp;
	scanf("%" PRIu64 "%" PRIu64,&a,&b);
	if(b>a)
	{
		tmp=a;
		a=b;
		b=tmp;
	}
	uint64_t lcm;
	lcm = (a*b)/gcd(a,b);
	printf("%" PRIu64,lcm);
	return 0;
}

	
