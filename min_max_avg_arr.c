#include <stdio.h>

int findMax(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[])
{
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

float calculateAverage(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return (float)sum / 5;
}

int main()
{
    int numbers[] = {4, 32, 1, 3, 0};

    printf("Der größte Wert: %d\n", findMax(numbers));
    printf("Der kleinste Wert: %d\n", findMin(numbers));
    printf("Der Mittelwert: %.2f\n", calculateAverage(numbers));

    return 0;
}
