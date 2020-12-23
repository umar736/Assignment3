#include<stdio.h>
int main()
{
	int limit,count,x;
	printf("ENTER THE LIMIT OF PYRAMID: ");
	scanf("%d",&limit);
	for (count=1;count<=limit;count++)
	{
		for (x=count;x<=limit;x++)
		{
			printf("%d",x);
		}
		printf("\n");
	}
}
