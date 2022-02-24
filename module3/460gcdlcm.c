# include <stdio.h>

int gcd_recursion (int a, int b)
{
  if (a % b == 0)
    return b;
  else
    return (gcd_recursion (b, a % b));
}

int lcm = 1;
int lcm_recursion (int a, int b)
{
  if (lcm % a == 0 && lcm % b == 0)
    return lcm;
  else
  {
    ++lcm;
    return (lcm_recursion (a, b));
  }
}

int main (void)
{
  int x, y;
  printf("Enter two numbers...\n");
  
  printf("x = ");
  scanf("%d", &x);
  
  printf("y = ");
  scanf("%d", &y);

  printf("GCD of the two numbers is %d\n", gcd_recursion (x, y));
  printf("LCM of the two numbers is %d\n", lcm_recursion (x, y));
}

/* Output:
Enter two numbers...
x = 20
y = 10
GCD of the two numbers is 10
LCM of the two numbers is 20

Enter two numbers...
x = 25
y = 30
GCD of the two numbers is 5
LCM of the two numbers is 150
*/
