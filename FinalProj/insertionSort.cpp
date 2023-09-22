#include "insertionSort.h"
#include <iostream>

using namespace std;

void insertionSort::insertdisplay(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void insertionSort::insertionsort(int* a, int n) {
    int i, j;
    cout << endl << "Insertion Sort..." << endl << endl;
    for (i = 1; i < n; i++) {
        int tmp = a[i];
        for (j = i; j > 0 && tmp < a[j - 1]; j--)
            a[j] = a[j - 1];
        a[j] = tmp;
        cout << "Pass " << i << "...." << endl;
        insertdisplay(a, n);
        cout << endl;
    }
}