#include "bubbleSort.h" 
#include<iostream>

using namespace std;

void bubbleSort::bubbledisplay(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void bubbleSort::bubblesort(int* a, int n)
{
    int last = n - 1;
    cout << "Bubble Sort..." << endl << endl;
    for (int i = 0; i < last; i++)
    {
        for (int j = last; j > i; j--)
            if (a[j - 1] > a[j])
                swap(a[j], a[j - 1]);
        cout << "Pass " << i + 1 << "...." << endl;
        bubbledisplay(a, n);
        cout << endl;
    }
}
