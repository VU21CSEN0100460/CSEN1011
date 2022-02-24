/* Algorithm:

1. Start
2. Accept two numbers num and div.
3. Reminder can be calculated as num - div (num/div)
4. Stop */

#include<stdio.h>
int main() {
    int num, div;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter divisor: ");
    scanf("%d", &div);

    printf("Reminder = %d\n", num - div * (num/div));
    
    return 0;
}

/* Output:
Enter an integer: 26
Enter divisor: 9
Reminder = 8

Enter an integer: 25
Enter divisor: 5
Reminder = 0
*/
