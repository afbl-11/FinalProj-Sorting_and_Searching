#pragma once
class heapSort {
public:
    void HeapSort(int arr[], int size);
	void heapdisplay(int arr[], int size);

private:
    void heapify(int arr[], int size, int root);
	
};