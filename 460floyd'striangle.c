#include<stdio.h>
int main()
{
	int number,c=1;
	int a,b;
	
	printf("Enter the number of rows");
	scanf("%d", &number);
	
	for(a=1;a<=number;a++)
	{
		for(b=1;b<=a;++b)
		{
			printf("%d", c);
			c++;
			
		}
		   printf("\n");
	}
	return 0;
}
	
	
