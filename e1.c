#include <stdio.h>
#include <math.h>
int main ()
{   int n;
	float a,b,c;
	scanf("%d",&n);
	a = 1;
	while(a<n)
	{
	a = a+1;
	c = 1+1/a;
	b =  pow(c,a);
	printf("%f      %.9f\n",a,b);
	}
	return 0;
	
}
