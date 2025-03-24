#include <stdio.h>
#include <stdlib.h>

int calc(int a)
{
    int sum = 0;
    if (a == 0)
    {
        return 0;
    }
    else
    {
        return a + calc(a - 1);
    }
}

int main()
{
    int n, sum;
    printf("Enter n");
    scanf("%d", &n);
    sum = calc(n);
    printf("%d", sum);
    return 0;
}