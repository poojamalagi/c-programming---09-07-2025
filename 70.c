#include<stdio.h>
int main()
{
    int i, j, arr[100][100], sum = 0, m, n;

    printf("Enter the size of matrix (rows and columns): ");
    scanf("%d %d", &m, &n);

    printf("Enter the %d*%d elements:\n", m, n);
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix:\n");
    for(i = 0; i< m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }

    printf("\nTotal = %d\n", sum);

}
