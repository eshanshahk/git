#include <stdio.h>
int main()
{

    int arr1[4][4], arr2[4][4], transpose[4][4], i, j, size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter array \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            transpose[j][i] = arr1[i][j];
        }
    }
    printf("Matrix:\n");
    for (j = 0; j < size; j++)
    {
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix:\n");
    for (j = 0; j < size; j++)
    {
        for (i = 0; i < size; i++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}