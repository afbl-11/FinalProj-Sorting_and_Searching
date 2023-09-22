#include "selectionSort.h"
#include<iostream>

using namespace std;

void selectionSort::selectdisplay(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionSort::selectionsort(int* a, int n)
{
    cout << endl << "Selection Sort..." << endl << endl;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[i], a[min]);
        cout << "Pass " << i + 1 << "...." << endl;
        selectdisplay(a, n);
        cout << endl;
    }
}