#include <iostream>
using namespace std;
int steps=0;


void findMinMax(int arr[], int n, int &min, int &max) {
    if (n <= 0) {
        cout << "Array is empty." << endl;
        return;
    }
    
    
    min = arr[0];
    max = arr[0];

    
    for (int i = 1; i < n; i++) {
    	steps+=1;
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int min, max;

    findMinMax(arr, n, min, max);

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    cout<<endl<<"Total number of steps required : "<<steps;

    return 0;
}

