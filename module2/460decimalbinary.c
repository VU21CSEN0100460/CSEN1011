#include<stdio.h>
int main()
{
  int n, r, n_b = 0;
  
  printf("Decimal Number: ");
  scanf("%d", &n);
  
  int f = 1;
  
  while ( n!=0)
  {
    r = n%2;
    n_b = n_b + r*f;
    f = f*10;
    n = n/2;
  }
  printf("Binary  Number: %d\n", n_b);
  return 0;
}

/* Output:
Decimal Number: 10
Binary  Number: 1010

Decimal Number: 1023  (Max)
Binary  Number: 1111111111
*/
