#include <stdio.h>
int main() {
  int c, f;
  
  printf("Enter Temperature (°C): ");
  scanf("%d", &c);
  
  f = (c * 9 / 5) + 32;
  
  printf("Converted Temperature : %d°F", f);
}

/* Output:
Enter Temperature (°C): 100
Converted Temperature : 212°F
*/
