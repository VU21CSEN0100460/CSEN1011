# include <stdio.h>
int main (void)
{
  int marks[5];
  printf("Enter 5 values for marks array...\n");
  
  for (int index =0; index < 5; index++)
    scanf("%d", &marks[index]);
  
  printf("The elements entered are...\n");
  for (int index =0; index < 5; index++)
    printf("%d\t", marks[index]);
  return 0;
}

/* Output:
Enter 5 values for marks array...
2 4 6 8 10
The elements entered are...
2	4	6	8	10	

Enter 5 values for marks array...
10
20
30
40
50
The elements entered are...
10	20	30	40	50	
*/
