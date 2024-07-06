#include <iostream>
#include <vector>

void quickSort(std::vector<int> &arr, int left, int right)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}

int main()
{
    std::vector<int> data = {34, 7, 23, 32, 5, 62};
    quickSort(data, 0, data.size() - 1);

    std::cout << "Sorted array: ";
    for (int num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}