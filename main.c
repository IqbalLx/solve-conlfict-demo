#include <stdio.h>

#include "searching.h"

void display_list(int *list, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", list[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int *list, int length, int type)
{
    for (int i = 0; i < length - 1; i++)
    {
        int temp;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (type == 1)
            {
                if (list[j] < list[j + 1])
                {
                    swap(&list[j], &list[j + 1]);
                }
            }
            else
            {
                if (list[j] > list[j + 1])
                {
                    swap(&list[j], &list[j + 1]);
                }
            }
        }
    }
}

int main()
{

    int arr[5] = {
        1,
        3,
        4,
        2,
        5,
    };

    printf("\n");
    printf("Original Array : ");
    display_list(arr, 5);

    sort(arr, 5, 0);
    printf("\n");
    printf("Ascending Sort Result : ");
    display_list(arr, 5);

    sort(arr, 5, 1);
    printf("\n");
    printf("Descending Sort Result : ");
    display_list(arr, 5);

    printf("Angka 3 berada pada index: %d\n", sequential_search(arr, 5, 3));

    return 0;
}