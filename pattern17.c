#include <stdio.h>

int main()
{
	int n,i,j,k=0;
	printf("Enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		{
			printf("%d ",++k);
	    }
		printf("\n");
	}	
	return 0;
}