#include <stdio.h>
int main()
{
	int basic,hra,da,pf,it,netsalary;
	printf("Enter the basic--\n");
	scanf("%d",&basic);
	printf("Enter the da--\n");
	scanf("%d",&da);
	printf("Enter the hra--\n");
	scanf("%d",&hra);
	printf("Enter the pf--\n");
	scanf("%d",&pf);
	printf("Enter the it--\n");
	scanf("%d" ,&it);
	netsalary=(basic+hra+da)-(pf+it);
    printf("Calculated net salary--%d\n",(basic+hra+da)-(pf+it));
    
}
