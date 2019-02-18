#include <iostream>
using namespace std;

void showArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << std::endl;
}

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

int main()
{
    int array[] = {5,7,6,10,9,2,4,8,1,0 };
    int n = sizeof(array)/sizeof(array[0]);

    std::cout << "Before Quick Sorting :" << std::endl;
    showArray(array, n);

    quickSort(array, 0, n);

    std::cout << "After Quick Sorting :" << std::endl;
    showArray(array, n);
    return (0);
}
