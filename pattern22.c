#include <stdio.h>

int main()
{
	int n,i,j,k=1;
	printf("Enter n");
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		{
			if(j!=i)
            printf("%d*",k);

            else if (j==i)
            printf("%d",k);
	    }
	    k++;
		printf("\n");
	}
    k--;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
		    if (j==n-i-1)
            printf("%d",k);

            if (j!=n-i-1)
            printf("%d*",k);
	    }
	    k--;
	    printf("\n");
	}
	return 0;
}
