/* Algorithm:

1. Start
2. Accept a number
3. Divide the number by 2
4. If we get reminder 0, the number is even, else it is odd
5. Stop */

#include <stdio.h>

int main()
{
   int a;

   printf("Enter a number: ");
   scanf("%d", &a);
   
   if (a % 2==0)
   {
      printf("The number is Even");
   }
   else
   {
      printf("The number is Odd");
   }

   return 0;
}

/* Output
Enter a number: 15
The number is Odd
~/CSEN1011/Module-01 Programs$ ./a.out

Enter a number: 14
The number is Even
~/CSEN1011/Module-01 Programs$ ./a.out
