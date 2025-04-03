#include <stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
  printf("AFTER SWAPPING A=%d \t B=%d \n", *x, *y);
}
int main()
{
  int a = 5, b = 6;
  printf("BEFORE SWAPPING A=%d \t B=%d \n", a, b);
  swap(&a, &b);
  
  return 0;
}
