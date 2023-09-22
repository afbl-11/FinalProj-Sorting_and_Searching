#include "heapSort.h"
#include<iostream>

void heapSort::HeapSort(int arr[], int size) {
    // Build max heap
    for (int i = size / 2 - 1; i >= 0; --i) {
        heapify(arr, size, i);
    }

    // Extract elements from the heap one by one
    for (int i = size - 1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void heapSort::heapify(int arr[], int size, int root) {
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != root) {
        std::swap(arr[root], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapSort::heapdisplay(int arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
