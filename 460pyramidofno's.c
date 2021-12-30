#include<stdio.h>
int main ()
{
	int i,j,k,s,n;
	
	printf("enter the number of rows");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    	for (s=1;s<=n-i;s++)
    	{
    		printf(" ");
		}
     k=i;
       for(j=1;j<=i;j++)
       {
       printf("%d ",k++);
	   }
       k=k-2;
       for(j=1;j<i;j++)
       {
       	printf("%d ",k--);
       }
        printf("\n");
    }
   
    return 0;
}

