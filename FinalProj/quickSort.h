#pragma once
class quickSort {
public:
    void quicksort(int arr[], int left, int right);
	void quickdisplay(int arr[], int size);

private:
    int partition(int arr[], int left, int right);
	
};

