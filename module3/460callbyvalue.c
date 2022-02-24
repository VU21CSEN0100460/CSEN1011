# include <stdio.h>

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
  printf("\nInside Swap Function ...\n x = %d, y = %d", x, y);
}

void swap_ref(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a, b;
  
  printf("Enter the value of a: ");
  scanf("%d",&a);
  
  printf("Enter the value of b: ");
  scanf("%d",&b);
  
  printf("Before Swapping ...\n a = %d, b = %d", a, b);
  swap(a, b);
  printf("\nAfter Swapping ...\n a = %d, b = %d", a, b);
  swap_ref(&a, &b);
  printf("\nAfter Calling swap_ref Function ...\n a = %d, b = %d\n", a, b);
  return 0;
}

/* Output
Enter the value of a: 15
Enter the value of b: 5
Before Swapping ...
 a = 15, b = 5
Inside Swap Function ...
 x = 5, y = 15
After Swapping ...
 a = 15, b = 5
After Calling swap_ref Function ...
 a = 5, b = 15
 ~/CSEN1011/Module-03 Programs$ ./a.out
 
 Enter the value of a: 10
Enter the value of b: 20
Before Swapping ...
 a = 10, b = 20
Inside Swap Function ...
 x = 20, y = 10
After Swapping ...
 a = 10, b = 20
After Calling swap_ref Function ...
 a = 20, b = 10
 ~/CSEN1011/Module-03 Programs$ ./a.out
