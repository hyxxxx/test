#include <stdio.h>
#include <math.h> 
int main(int argc, char *argv[])
{
	float a,b,c,d;
	scanf("%f",&a);
	b=a;
	while(b<=a)
	{
		c=sqrt(b);
		a=a-1;
		d=a+c;
		while(0<a)
		{
		d=sqrt(d);
		a=a-1;
		d=a+d;
		}
	}
    printf("%.0f %20.16f\n",b,d);
	return 0;
}
