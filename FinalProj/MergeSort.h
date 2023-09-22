#pragma once
class MergeSort {
public:
    void mergeSort(int arr[], int size);
    void mergedisplay(int arr[], int size);
  
private:
    void merge(int arr[], int left, int middle, int right);
    
};
