#include <stdio.h>
#include <math.h>
int main ()
{   int n;
    double a,b,c;
	scanf("%d",&n);
	a = 0;
	while(++a<=n)
	{
	c = 1+1/a;
	b =  pow(c,a);
	printf("%.1lf %30.16lf\n",a,b);
	}
	
	return 0;
	
}
