#include <stdio.h>

void main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, pos;
    for (int i = 0; i <= n - 2; i++)
    {
        int min = arr[i];


        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        int temp = arr[pos];
       arr[pos] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}