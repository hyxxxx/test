#include <stdio.h>
#define A 7.64
#define S 0.325
int main(int argc, char *argv[])
{
	double shoe,foot;
	
	printf("shoe size(men's)   foot length\n");
	shoe = 3.0;
	while(shoe < 18.5)
	{
		foot = S * shoe + A;
		printf("%10.1f %15.2f inches\n",shoe,foot);
		shoe = shoe + 1.0;
	}
	printf("if the shoe fits , wear it\n");
	return 0;
}