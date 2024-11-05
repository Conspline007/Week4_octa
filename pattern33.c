#include <stdio.h>

int main()
{
	int n,i,j1,j2,s;
	printf("Enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		//1st half
		//j1
		
		for (j1=0;j1<i+1;j1++)
		{
		printf("*");
	    }
	    //s
	    
		for (s=0;s<2*n-2*i-2;s++)
		{
			printf(" ");
		}
		//j2
		
		for (j2=0;j2<i+1;j2++)
		{
		printf("*");
	    }
	    printf("\n");
	    
	}	
	for (i=1;i<n;i++)
	{
		//2nd time
	    //j1
		
		for (j1=0;j1<n-i;j1++)
		{
		printf("*");
	    }
	    //s
	    
		for (s=0;s<2*i;s++)
		{
			printf(" ");
		}
		//j2
		
		for (j2=0;j2<n-i;j2++)
		{
		printf("*");
	    }
	    
	    
		
	    printf("\n");
	}
	return 0;
}
