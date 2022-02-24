/* Algorithm

1. Start
2. Accept the two numbers
3. Perform addition of the two numbers
4. Display the result
5. Stop */

#include<stdio.h>

int main()
{
   int a, b, result;
   
   printf("Enter 1st number: ");
   scanf("%d", &a);
   
   printf("Enter 2nd number: ");
   scanf("%d", &b);
   
   result = a + b;
   
   printf("The sum of %d and %d is %d", a, b, result);
   
   return 0;
}

/* Output
Enter 1st number : 7
Enter 2nd number : 14

The sum of 7 and 14 is 21
~/CSEN1011-3/Module-01 Programs$ ./a.out

Enter 1st number : 5
Enter 2nd number : 15

The sum of 5 and 15 is 20

Learnings
01. Sum
*/
