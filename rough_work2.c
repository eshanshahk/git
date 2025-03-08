#include <stdio.h>
int main()
{

    int arr1[4][4], arr2[4][4], result[4][4], i, j, k, size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter array 1 ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter array 2 ");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            for (k = 0; k < size; k++)
            {
                result[i][j] = arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}