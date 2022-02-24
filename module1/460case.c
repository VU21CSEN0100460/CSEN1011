/*Develop a C program to covert upper-case character to a lower-case character and vice versa.
It should display a message "Incorrect data" if a non-character is given as input.*/

/* Algorithm
1. Start
2. Accept a character
3. If the character is lowercase, its ASCII value will be in the range 97 to 122 and upper case will be in the range 65 to 90.
04. For conversion from lower case to upper case, subtract 32 and for conversion from upper to lower case, add 32.
04. Stop */

#include<stdio.h>
int main() {
    char i;
    
    //printf("Enter a character: ");
    scanf("%c", &i);
    
    if (i >= 97 && i <= 122)
    {
        printf("%c", i - 32);
    }
    else if (i >= 65 && i <= 90)
    {
        printf("%c", i + 32);
    }
    else
    {
        printf("Incorrect data");
    }
    return 0;
}

/* Output
a
A
~/CSEN1011-3/Module-01 Programs$ ./a.out
A

a
Learnings
01. ASCII characterset.
02. Logical operator && (and)
*/
