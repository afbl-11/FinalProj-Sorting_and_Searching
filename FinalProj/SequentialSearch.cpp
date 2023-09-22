#include "SequentialSearch.h"

int SequentialSearch::sequentialSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;  // Element not found
}
