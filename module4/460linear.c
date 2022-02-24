# include <stdio.h>
# define SIZE 5
int main(void)
{
  int list_of_integers[SIZE];  // Array declaration
  int element;  //search
  printf("Enter %d integers...\n", SIZE);
  
  for (int i=0; i<SIZE; i++)
    scanf("%d", &list_of_integers[i]);

  printf("\nThe elements in the list are...\n");
  for (int i=0; i<SIZE; i++)
    printf("%d\t", list_of_integers[i]);
  
  printf("\n\nEnter the element to be searched: ");
  scanf("%d", &element);

  for (int i=0; i<SIZE; i++)
    if (element == list_of_integers[i]) {
      printf("\nThe element is found at index %d\n", i);
      return 0;
    }

  printf("\nThe element is not found\n");
  return 0;
}

/* Output:
--------------------------------------
Enter 5 integers...
1 2 3 4 5

The elements in the list are...
1	2	3	4	5	

Enter the element to be searched: 7

The element is not found
--------------------------------------
Enter 5 integers...
12 24 36 48 60

The elements in the list are...
12	24	36	48	60	

Enter the element to be searched: 24

The element is found at index 1
--------------------------------------
*/
