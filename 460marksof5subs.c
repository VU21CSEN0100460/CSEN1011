#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	int total,average,percentage;
	
	printf("enter the marks of maths=");
	scanf("%d" ,&a);
	
	printf("enter the marks of english=");
	scanf("%d" ,&b);
	
	printf("enter the marks of science=");
	scanf("%d" ,&c);
	
	printf("enter the marks of social=");
	scanf("%d" ,&d);
	
	printf("enter the marks of hindi=");
	scanf("%d" ,&e);

total=a=b+c+d+e;
average=total/5;
percentage=(total*100)/500;

    printf("total=%d\n", a+b+c+d+e);
	printf("average=%d\n", total/5);
	printf("percentage=%d\n", (total*100)/5);	
	
}
