#include <iostream>

using namespace std;

template <typename T>
T findMax(T arr[], int size) 
{
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
template <typename T>
T findMin(T arr[], int size) 
{
    T minVal = arr[0];
    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] < minVal) 
        {
            minVal = arr[i];
        }
    }
    return minVal;
}
template <typename T>
void selectionSort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) 
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        if (minIndex != i) 
        {
            T temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
template <typename T>
int binarySearch(T arr[], int size, T key) 
{
    int left = 0, right = size - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) 
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }
    return -1;
}
template <typename T>
void replaceElement(T arr[], int size, T oldVal, T newVal) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == oldVal) 
        {
            arr[i] = newVal;
            return;
        }
    }
}
int main() {
    int intArr[] = { 8, 2, 810, 342, 0 };
    double doubleArr[] = { 1.4, 8.8, 2.5, 10.1, 18.7 };
    const int size = sizeof(intArr) / sizeof(int);

    cout << "Max value in Arr: " << findMax(intArr, size) << endl;
    cout << "Min value in Arr: " << findMin(intArr, size) << endl;

    selectionSort(intArr, size);
    cout << "Sorted Arr: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << intArr[i] << " ";
    }
    cout << endl;

    cout << "Index of 8 in Arr: " << binarySearch(intArr, size, 8) << endl;

    replaceElement(intArr, size, 5, 10);
    cout << "Arr after replacing 5 with 10: ";
    for (int i = 0; i < size; ++i) 
    {
        cout << intArr[i] << " ";
    }
    cout << endl;
}