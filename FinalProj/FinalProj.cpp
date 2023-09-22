#include <iostream>
#include "BinarySearch.h"
#include "bubbleSort.h"
#include "heapSort.h"
#include "insertionSort.h"
#include "MergeSort.h"
#include "quickSort.h"
#include "selectionSort.h"
#include "SequentialSearch.h"
#include "shellSort.h"
#include <iomanip>

using namespace std;

void performBubbleSort(int arr[], int size) {
    bubbleSort bubblesort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    bubblesort.bubbledisplay(arr, size);
    cout << endl;

    bubblesort.bubblesort(arr, size);

    cout << "Array after sorting: ";
    bubblesort.bubbledisplay(arr, size);
}

void performSelectionSort(int arr[], int size) {
    selectionSort sSort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    sSort.selectdisplay(arr, size);
    cout << endl;

    sSort.selectionsort(arr, size);

    cout << "Array after sorting: ";
    sSort.selectdisplay(arr, size);
}

void performInsertionSort(int arr[], int size) {
    insertionSort insertsort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    insertsort.insertdisplay(arr, size);
    cout << endl;

    insertsort.insertionsort(arr, size);

    cout << "Array after sorting: ";
    insertsort.insertdisplay(arr, size);
}

void performShellSort(int arr[], int size) {
    shellSort shellsort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    shellsort.shelldisplay(arr, size);
    cout << endl;

    shellsort.shellsort(arr, size);

    cout << "Array after sorting: ";
    shellsort.shelldisplay(arr, size);
}

void performMergeSort(int arr[], int size) {
    MergeSort mSort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    mSort.mergedisplay(arr, size);
    cout << endl;

    mSort.mergeSort(arr, size);

    cout << "Array after sorting: ";
    mSort.mergedisplay(arr, size);
}

void performQuickSort(int arr[], int size) {
    quickSort qSort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    qSort.quickdisplay(arr, size);
    cout << endl;

    qSort.quicksort(arr, 0, size - 1);

    cout << "Array after sorting: ";
    qSort.quickdisplay(arr, size);
}

void performHeapSort(int arr[], int size) {
    heapSort Hsort;

    cout << "The size of the array is: " << size << endl;
    cout << "Enter " << size << " digits: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Array before sorting: ";
    Hsort.heapdisplay(arr, size);
    cout << endl;

    Hsort.HeapSort(arr, size);

    cout << "Array after sorting: ";
    Hsort.heapdisplay(arr, size);
}
void performBinarySearch(int searchArr[], int size) {
    BinarySearch binarySearchObj;

    std::cout << "Search numbers from 1-10" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> searchArr[i];
    }

    int target;
    std::cout << "Enter the target value: ";
    std::cin >> target;

    int result = binarySearchObj.binarySearch(searchArr, size, target);

    if (result != -1) {
        std::cout << "Target found at index " << result << std::endl;
    }
    else {
        std::cout << "Target not found in the array." << std::endl;
    }
}
void performSequentialSearch(int searchArr[], int size)
{
    SequentialSearch seqSearch;

    std::cout << "Search numbers from 1-10" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> searchArr[i];
    }

    int target;
    std::cout << "Enter the target value: ";
    std::cin >> target;

    int result = seqSearch.sequentialSearch(searchArr, size, target);

    if (result != -1) {
        std::cout << "Target found at index " << result << std::endl;
    }
    else {
        std::cout << "Target not found in the array." << std::endl;
    }
}
int main()
{
    char op;
    const int size = 10;
    int arr[size] = {};
    int searchArr[size] = { 1,2,3,4,5,6,7,8,9 };

    cout << "[1] Bubble Sort" << setw(25) << "[2] Selection Sort" << setw(25) << "[3] Insertion Sort" << endl;
    cout << "[4] Shell Sort" << setw(22) << "[5] Merge Sort" << setw(25) << "[6] Quick Sort" << endl;
    cout << "[7] Heap Sort" << setw(26)<<"[8] Binary Search"<<setw(29)<<"[9] Sequential Search"<<endl;
    cout << "Select operation: ";
    cin >> op;

    switch (op)
    {
    case '1': // Bubble Sort
        performBubbleSort(arr, size);
        break;

    case '2': // Selection Sort
        performSelectionSort(arr, size);
        break;

    case '3': // Insertion Sort
        performInsertionSort(arr, size);
        break;

    case '4': // Shell Sort
        performShellSort(arr, size);
        break;

    case '5': // Merge Sort
        performMergeSort(arr, size);
        break;

    case '6': // Quick Sort
        performQuickSort(arr, size);
        break;

    case '7': // Heap Sort
        performHeapSort(arr, size);
        break;
    case '8'://binary search
        performBinarySearch(searchArr, size);
        break;
    case '9'://sequentialsearch
        performSequentialSearch(searchArr, size);
        break;
    default:
        cout << "Invalid option selected.";
        break;
    }

    return 0;
}
