#include<stdio.h>
int main()
{
 int x, y, limit;
 printf("Enter the end of pattern: ");
 scanf("%d",&limit);
 for(x = 1; x <= limit; x++)
 {
   for(y= x; y <= limit; y++)
   {
     if (x == 1 || y == limit || y == x)
     printf("%d", y);
     else
     printf(" ");
    }
  printf("\n");
 }
return 0;
}
