#include <stdio.h>

int main()
{
	int n,i;
    char ch;
	printf("Enter n");
	scanf("%d",&n);
    int k=0;
	for (i=0;i<n;i++)
	{
		for (ch=65+n-i-1; ch<=65+n-1;ch++)
        printf("%c ",ch);
       
		printf("\n");
	}	
	return 0;
}
