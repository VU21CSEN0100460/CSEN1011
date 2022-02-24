/* Algorithm:
01. Start
02. Accept a, b (integers) amd an op (operator)  .
03. Based on the operator use switch case
04. Stop  */

#include <stdio.h>
int main() {
  char op;
  int a, b;
  printf("Enter an operator (+, -, *, /, %): ");
  scanf("%c", &op);
  
  printf("Enter 1st number: ");
  scanf("%d", &a);
  
  printf("Enter 2nd number: ");
  scanf("%d", &b);
  
  //scanf("%d %d %c", &a, &b, &op);
  //printf("Enter two numbers: ");
  //scanf("%d %d", &a, &b);

  switch (op) {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      //printf("%d", a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b, a - b);
      //printf("%d", a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      //printf("%d", a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      //printf("%d", a / b);
      break;
    case '%':
      printf("%d %% %d = %d", a, b, a % b);
      //printf("%d", a % b);
      break;
    default:
      printf("Error! Invalid operator");
  }

  return 0;
}

/* Output:
Enter an operator (+, -, *, /, %): %
Enter 1st number: 23
Enter 2nd number: 8
23 % 8 = 7

Learnings:
Use of switch case
*/

/* Another Model:
#include <stdio.h>
int main() {
  char op;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &a, &b);

  switch (op) {
    case '+':
      printf("%.2lf", a + b);
      break;
    case '-':
      printf("%.2lf", a - b);
      break;
    case '*':
      printf("%.2lf", a * b);
      break;
    case '/':
      printf("%.2lf", a / b);
      break;
    default:
      printf("Error! Invalid operator");
  }

  return 0;
}
*/

/* Output
Enter an operator (+, -, *, /): /
Enter two numbers: 8
3
2.67
*/
