int sequential_search(int *arr, int arr_length, int target)
{
    for (int i = 0; i < arr_length; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}
