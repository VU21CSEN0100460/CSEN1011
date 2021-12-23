include<stdio.h>
int main()
 {
   int i,j,columns;
   printf("Enter the number of columns: ");
   scanf("%d", &columns);
   for (i = 1; i <= columns; ++i)
    {
    	for(j=1 ; j<=i; ++j)
		{
    	printf("*");
		}
        printf("\n");
    }
    
   return 0;
}
