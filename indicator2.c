#include <stdio.h>

void cube(int a[2][2], int n)
{

    printf("\nCubes of all elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j] * a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[2][2];
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cube(a, n);

    return 0;
}    