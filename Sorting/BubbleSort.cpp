#include <iostream>
using namespace std;

void bubbleSort(int arr[], std::size_t size)
{
    int temp = 0;
    for (std::size_t i = 0; i < size; ++i)
    {
        for (std::size_t j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 7, 1, 4, 9};
    std::size_t size = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, size);

    for (std::size_t i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}