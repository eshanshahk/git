#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello, World!";
    char sub[] = "World";
    char *position = strstr(str, sub);
    if (position)
        printf("Substring found at position: %ld\n", position - str);
    else
        printf("Substring not found. \n");
    return 0;
}