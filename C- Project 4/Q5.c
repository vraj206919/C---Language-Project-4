

#include <stdio.h>

int main()
{

  int n = 5;

  int j, k;

  for (int i = 1; i <= n; i++)
  {
    for (int k = 1; k <= n-i; k++)
    {
      printf("  ");
    }

    for (int j = n - i + 1; j <= n; j++)
    {
      printf("%d ", j);
    }

    for (int j = n - 1; j >= n - i + 1; j--) 
    {
      printf("%d ",j);
    }
    

    printf("\n");
  }

  return 0;
}