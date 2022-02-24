/* Algorithm:

1. Start
2. Accept a positive integer "n" (Number > 2)
3. Initialise i with value 2
4. Divide the number with the counter value
5. If the reminder is 0, display that the number is composite and stop
6. Else, increment the counter and repeat from step 4 until counter value is less than "n"
7. After completion of all the steps, display that the number "n" is prime
8. Stop */

#include<stdio.h>
int main() {
	int num, i;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for (i = 2; i < num-1; i++)
	{
		if (num % i == 0)
		{
			printf("Composite");
			return 0;
		}
	}
	printf("Prime");
	return 0;
}

/* Output:
Enter a number: 61
Prime

Enter a number: 54
Composite
*/
