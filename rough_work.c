#include <stdio.h>
int array(int a)
{
    int arr1[4][4], arr2[4][4], i, j;
    printf("Enter array 1 ");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter array 2 ");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    return arr1[4][4], arr2[4][4];
}
int main()
{
    int arr1[4][4], arr2[4][4], sum[4][4], i, j, size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    array(size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("Sum is \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

// Function to read two matrices
void array(int a, int arr1[][4], int arr2[][4])
{
    int i, j;
    printf("Enter array 1:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter array 2:\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
}

int main()
{
    int arr1[4][4], arr2[4][4], sum[4][4], i, j, size;

    printf("Enter the size of array (max 4): ");
    scanf("%d", &size);

    if (size > 4 || size <= 0)
    {
        printf("Invalid size! Enter a value between 1 and 4.\n");
        return 1;
    }

    // Pass arrays to the function to be filled
    array(size, arr1, arr2);

    // Calculate sum
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display sum
    printf("Sum of matrices:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
