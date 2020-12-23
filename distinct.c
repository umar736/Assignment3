#include<stdio.h>
int main()
{
	int num, count, a, b, dis=0;
	printf("enter input 1:");
	scanf("%d",&a);
	printf("enter input 2:");
	scanf("%d",&b);
	printf("enter input 3:");
	scanf("%d",&num);
	for(count=0;count<1;count++)
	{
		if(a!=b && a!=num)
		dis=dis+1;
		if(b!=a && b!=num)
		dis=dis+1;
		if(a==b || a==num || b==num)
		dis=dis+1;
		if(num!=a && num!=b)
		dis=dis+1;
	
	}
	printf("%d distinct numbers.",dis);
}
