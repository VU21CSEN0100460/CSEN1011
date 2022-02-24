#include<stdio.h>
#include<math.h>
int main()
 { 
   double i, j, result;
   
   printf("Enter the Base: ");
   scanf("%lf",&i);
   printf("Enter the Power: ");
   scanf("%lf" ,&j),
   
   result = pow(i, j);
   
   printf("%.1lf ^ %.1lf = %.2lf", i, j, result);
   return 0;
 }

/* Output:
Enter the Base: 25
Enter the Power: 2
25.0 ^ 2.0 = 625.00

Enter the Base: 52.4
Enter the Power: 4.8
52.4 ^ 4.8 = 178974096.02
*/
