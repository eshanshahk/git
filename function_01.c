//Sum of two numbers using function
#include <stdio.h>
#include <stdlib.h>

int sum();//Function prototype

int sum(){//function definition
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("The sum is %d \n",a+b);
    return a+b;
}
int main() {
    char c,y,n;
    int a,b;
    sum();//function call
    label:printf("Do u want to add another two numbers?(y/n)");
    scanf(" %c",&c);
    getchar();
    if (c=='y'){
        sum();
        goto label;
    }
    else if (c=='n')
    {
        return 0;
    }
    else
    {
        printf("Invalind input");
    }
    
    return 0;
}