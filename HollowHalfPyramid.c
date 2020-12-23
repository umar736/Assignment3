#include<stdio.h>
int main()
{
 int x, y, limit;
 printf("Enter the end of pattern: ");
 scanf("%d",&limit);
 for(x = 1; x <= limit; x++)
 {
   for(y= 1; y <= x; y++)
   {
     if (y == 1 || y == x || x == limit)
     printf("%d", y);
     else
     printf(" ");
    }
  printf("\n");
 }
return 0;
}
