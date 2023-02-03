int i;

int validMountainArray(int *arr, int arrSize)
{
    if (arr[0] >= arr[1])
        return 0;
    for (i = 1; i < arrSize - 1; i++)
    {
        if (arr[i] == arr[i + 1])
            break;

        if (arr[i] > arr[i + 1])
        {
            return checkDescSlope(arr, arrSize, i);
        }
    }
    return 0;
};

int checkDescSlope(int *arr, int arrSize, int j)
{
    for (i = j; i < arrSize - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            return 0;
        }
    }
    return 1;
}