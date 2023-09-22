#include "MergeSort.h"
#include<iostream>
#include <algorithm>

void MergeSort::mergeSort(int arr[], int size) {
    if (size <= 1) {
        return;
    }

    int middle = size / 2;
    mergeSort(arr, middle);
    mergeSort(arr + middle, size - middle);
    merge(arr, 0, middle, size);
}

void MergeSort::merge(int arr[], int left, int middle, int right) {
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    int* leftArr = new int[leftSize];
    int* rightArr = new int[rightSize];

    for (int i = 0; i < leftSize; ++i) {
        leftArr[i] = arr[left + i];
    }

    for (int i = 0; i < rightSize; ++i) {
        rightArr[i] = arr[middle + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }

    while (i < leftSize) {
        arr[k++] = leftArr[i++];
    }

    while (j < rightSize) {
        arr[k++] = rightArr[j++];
    }

    delete[] leftArr;
    delete[] rightArr;
}

void MergeSort::mergedisplay(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}