#include<stdio.h>

int main()
{
	int n,count;
	printf("Enter the limit of ORDINALS:");
	scanf("%d",&n);
	for (count=1;count<=n;count++)
	{
		if(count==1 || count%10==1 && count!=11 || count%100==1 && count!=11)
		 printf("%dst Hello\n",count);
		else if(count==2 || count%10==2 && count!=12 || count%100==2 && count!=12)
		 printf("%dnd Hello\n",count);
		else if(count==3 || count%10==3 && count!=13 || count%100==3 && count!=13)
		 printf("%drd Hello\n",count);
		else
		 printf("%dth Hello\n",count);
	}
}
