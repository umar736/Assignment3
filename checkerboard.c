#include<stdio.h>
int main()
{
	int i, n, a;
	do
	{
		printf("enter an integer:");
		scanf("  %d", &n);
	}
	while(n<1);
	for(i=0; i<n; i++)
	{
		if(i%2==1)
		{
			printf(" ");
		}
		for(a=0; a<n; a++)
		{
			printf(" *");
		}
		printf("\n");
	}
}
