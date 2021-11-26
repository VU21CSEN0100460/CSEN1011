#include<stdio.h>
int main() 
{
	int p,t,r;
	
	printf("Principle = ");
	scanf("%d" ,&p);
	
	printf("Time = ");
	scanf("%d" ,&t);
	
	printf("Rate of interest = ");
	scanf("%d" ,&r);
	
	printf("Simple interest = %d\n",(p*t*r/100));
	
	return 0;
	
}
