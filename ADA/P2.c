/*
Write user defined functions for the following sorting methods and compare their performance by
steps executed/time taken for execution on various inputs of random nature, ascending order and
descending order sorted data. Also, draw a comparative chart of number of inputs versus steps
executed/time taken for each cases (random, ascending, and descending).
1.Selection Sort
2.Bubble Sort
3.Insertion Sort
4.Merge Sort
5.Quick Sort
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int num[10000];
void ascending_order(int n){
    for(int i=0;i<n;i++){
        num[i]=i+1;
    }
}
void descending_order(int n){
    for(int i=0;i<n;i++){
        num[i]=n-i;
    }
}
void random_order(int n){
    for(int i=0;i<n;i++){
        num[i]=rand()%n;
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;    
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i;j<n;j++)
            if(arr[j]<arr[min_index])
                min_index=j;
        
        if(i!=min_index)
            swap(&arr[i],&arr[min_index]);
    }
}
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped)
            break;
    }
}
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void merge(int arr[], int l, int m, int r) {
    int i = l, j = m + 1, k = l;
    int temp[r+1];
    while (i <= m && j <= r) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= m) {
        temp[k++] = arr[i++];
    }

    while (j <= r) {
        temp[k++] = arr[j++];
    }

    for (int x = l; x <= r; x++) {
        arr[x] = temp[x];
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void main(){
    int n=5000;
    random_order(n);
    clock_t t;
    double time;
    
    t=clock();
    selectionSort(num,n);
    t=clock()-t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by selection sort : %f seconds\n", time);

    t=clock();
    bubbleSort(num,n);
    t=clock()-t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by bubble sort : %f seconds\n", time);

    t=clock();
    insertionSort(num,n);
    t=clock()-t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by insertion sort : %f seconds\n", time);

    t=clock();
    mergeSort(num,0,n-1);
    t=clock()-t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by merge sort : %f seconds\n", time);

    t=clock();
    quickSort(num,0,n-1);
    t=clock()-t;
    time = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time took by quick sort : %f seconds\n", time);
}