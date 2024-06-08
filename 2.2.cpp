#include <bits/stdc++.h>
using namespace std;

int steps=0;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++) {
        	steps+=1;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        
    }
}

int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    cout<<endl<<"Total number of steps required : "<<steps;
    return 0;
}


