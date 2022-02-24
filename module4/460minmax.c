# include <stdio.h>
int main (void)
{
  int list_of_integers[5];  // Array declaration
  
  
  printf("Enter 5 integers...\n");
  for (int i=0; i<5; i++)
    scanf("%d", &list_of_integers[i]);

  printf("\nThe elements in the list are...\n");
  for (int i=0; i<5; i++)
    printf("%d\t", list_of_integers[i]);
  int min_element = list_of_integers[0];    
  int max_element = list_of_integers[0];    
  for (int i=0; i<5; i++) {
    if (list_of_integers[i] < min_element) 
      min_element = list_of_integers[i];

    if (list_of_integers[i] > max_element) 
      max_element = list_of_integers[i];      
    
  }
  printf("\n\nMinimum element is %d\nMaximum element is %d\n", min_element, max_element);
  return 0;
}

/* Output:
Enter 5 integers...
10
20
30
40
50

The elements in the list are...
10	20	30	40	50	

Minimum element is 10
Maximum element is 50
*/
