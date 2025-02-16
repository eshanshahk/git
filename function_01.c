#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y);

int sum(int x, int y){
    printf("The sum is %d",x+y);
    return x+y;
}
int main() {
    int a,b;
    printf("Enter two numbers to add \t");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}