#include<stdio.h>
int main()
{
	int i, j, f;
    printf("Enter value of last digit : ");
    scanf("%d", &f);
    for(i = 1; i <= f; i++)
    {
     for(j = i; j < f; j++)
     {
       printf(" ");
     }
     for(j = 1; j <= i; j++)
     {
       if(j == 1 || i == f)
       {
         printf("%d " , j);
       }
       else
       {
         printf(" ");
       }
     }
     for(j = 1; j < i; j++)
     {
       if(j == i-1 && j < f-1)
       {
         printf("%d", j+1);
       }
       else
       {
         printf(" ");
        }
     }
     printf("\n");
    }
}
