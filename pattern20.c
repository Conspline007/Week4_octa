#include <stdio.h>

int main()
{
	int n,i,j,s,k=1;
	printf("Enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			printf("%d ",k++);
	    }
		printf("\n");
	}	
	return 0;
}