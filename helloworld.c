#include<stdio.h>

void test(char *strMsg)
{
	printf("test called: %s\n", strMsg);
}

int main()
{
	printf("hello world!\n");
	test();

	return 0;
}
