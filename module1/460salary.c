#include <stdio.h>
int main()
{
	float basic, hra, ta, others, da, pf, it, net_salary;
	
	printf("Enter Basic Salary: $");
	scanf("%f",&basic);
	printf("Enter HRA: $");
	scanf("%f",&hra);
	printf("Enter TA: $");
	scanf("%f",&ta);	
	printf("Enter Others: $");
	scanf("%f",&others);	
	
	da = (basic*12)/100;
	pf = (basic*14)/100;
	it = (basic*10)/100;
	
	net_salary = basic + hra + ta + others + da - (pf+it);
	
	printf("Net Salary: $%.2f\n", net_salary);
	
	return 0;
}

/* Output:
Enter Basic Salary: $10500
Enter HRA: $3000
Enter TA: $2500
Enter Others: $2000
Net Salary: $16740.00

Enter Basic Salary: $12500.5
Enter HRA: $3260.5
Enter TA: $2740.2
Enter Others: $1870.4
Net Salary: $18871.54
*/
