#include <stdio.h>
#define PI 3.1415926
int main(int argc, char *argv[])
{
	float A,C,R;
	scanf("%f",&R);
	A = PI * R * R;
	C = 2.0 * R *PI;
	printf("C = %1.9f,A = %1.9f",C,A);
	return 0;
}