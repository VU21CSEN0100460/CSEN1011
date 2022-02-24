/* Algorithm
1. Start
2. Accept Principle (p), Rate of interest (r), Time period(t)
3. Display Simple Interest by evaluating p * r * t / 100 and also Compound Interest by using p * (pow(1+r/100, t) - 1)
4. Stop */

#include<stdio.h>
#include<math.h>

int main()
{
	 float p, t, r, si, ci;
	 printf("Enter Principal Amount: ");
	 scanf("%f", &p);
	 printf("Enter Time Period: ");
	 scanf("%f", &t);
	 printf("Enter Rate of Interest: ");
	 scanf("%f", &r);
	
	 /* Calculating Simple Interest */
	 si = (p * r * t)/100;
	
	 /* Calculating Compound Interest */
	 ci = p * (pow(1+r/100, t) - 1);
	
	 printf("Simple Interest = %0.2f\n", si);
	 printf("Compound Interest = %0.2f", ci);
	 return(0);
}

/* Output:
Enter Principal Amount: 5000
Enter Time Period: 10
Enter Rate of Interest: 5
Simple Interest = 2500.00
Compound Interest = 3144.47

Enter Principal Amount: 1000000
Enter Time Period: 10
Enter Rate of Interest: 8
Simple Interest = 800000.00
Compound Interest = 1158925.88
*/
