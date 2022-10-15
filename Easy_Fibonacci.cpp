#include <stdio.h>
int main()
{
  int j, n, i, arr[100];
  scanf("%d", &n);
  arr[0] = 0;
  arr[1] = 1;
  for (i = 2; i < n; i++)
  {
    arr[i] = arr[i - 2] + arr[i - 1];
  }
  printf("0");
  for (j = 1; j < n; j++)
  {
    printf(" %d", arr[j]);
  }
  printf("\n");
  return 0;
}