#include <stdio.h>
#define S 64
#define C 1E15
int main(int argc, char *argv[])
{
	double current,total;
	int count = 1;
	printf("square grains total  ");
	printf("fraction of \n");
	printf("     added     grain     ");
	printf("US total\n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/C );
	while (count<S)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/C);
	}
	printf("that is all\n");
	return 0;
}
