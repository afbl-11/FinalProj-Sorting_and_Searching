#include "ShellSort.h"
#include <iostream>

void shellSort::shellsort(int arr[], int size) {
    // Generate gaps
    for (int gap = size / 2; gap > 0; gap /= 2) {
        insertionSort(arr, size, gap);
    }
}

void shellSort::insertionSort(int arr[], int size, int gap) {
    for (int i = gap; i < size; ++i) {
        int key = arr[i];
        int j = i - gap;

        while (j >= 0 && arr[j] > key) {
            arr[j + gap] = arr[j];
            j -= gap;
        }

        arr[j + gap] = key;
    }
}

void shellSort::shelldisplay(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}