#include <math.h>
#include <stdio.h>
int main()
{
	double a, b, c, d;
	scanf("%lf", &a);
	b = a;
	while (b <= a)
	{
		c = sqrt(b);
		d = c;
		while (1 < a)
		{
			a--;
			d = d + a;
			d = sqrt(d);
		}
	}
	printf("%.1lf %20.16lf", b, d);
	return 0;
}
