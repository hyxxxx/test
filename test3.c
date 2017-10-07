#include <stdio.h>
#define PRAISE "what a super marvelous name!"
int main(int argc, char *argv[])
{
	char name[40];
	printf("what is your name\n");
	scanf("%s",name);
	printf("hello,%s,%s\n",name,PRAISE);
	
	return 0;
}