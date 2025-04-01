#include<stdio.h>

void swap(int *x,int *y){
int **temp;
  temp=&x;
  *x=*b;
  *b=*temp;
  printf("AFTER SWAPPING A=%d \t B=%d,x,y");
}
int main()
{
int a=5,b=6;
  printf("BEFORE SWAPPING A="%d" \t B="%d",a,b);
  swap(&a,&b);
  return 0;
}
