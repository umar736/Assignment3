#include<stdio.h>
int main()
{
	int i, p, f, k = 0, count = 0, count1 = 0;
   printf("Enter the limit of pattern: ");
   scanf("%d", &f);
   for (i = 1; i <= f; ++i) {
      for (p = 1; p <= f - i; ++p) {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1) {
         if (count <= f - 1) {
            printf("%d ", i + k);
            ++count;
         } else {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
}
