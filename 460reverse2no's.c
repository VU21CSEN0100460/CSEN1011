#include<stdio.h>
int main ()
{
	int a,r,rev;
	
	printf("Enter a number");
	scanf("%d" ,&a);
	while(a!=0)
	{
		r=a%10;
		rev= rev*10+r;
        a=a/10;
}
    printf("reversed number =%d",rev);
    
    return 0;

}
