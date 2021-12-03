#include <stdio.h>
int main()
{
	int a=6,b=7;
	
	printf("before swapping\n");
	printf("a=%d b=%d", a,b );

    a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n");
	printf("a=%d b=%d" , a,b);
	return 0;
}
