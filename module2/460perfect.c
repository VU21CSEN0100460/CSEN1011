// Perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.

#include<stdio.h>
int main() {
	int num, sum = 0, i = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (i<num)
	{
		if (num % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	if (sum == num)
	printf("%d is a Perfect Number", num);
	
	else
	printf("%d is not a Perfect Number", num);
	
	return 0;
}

/* Output:
Enter a number: 496
496 is a Perfect Number

Enter a number: 5
5 is not a Perfect Number

Enter a number: 6
6 is a Perfect Number */
