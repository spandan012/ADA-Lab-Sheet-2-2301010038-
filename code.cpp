#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort
void bubbleSort(vector<int> &arr, int &stepCount) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            stepCount++; // Comparison
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                stepCount++; // Swap
            }
        }
    }
}

// Selection Sort
void selectionSort(vector<int> &arr, int &stepCount) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            stepCount++; // Comparison
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
        stepCount++; // Swap
    }
}

// Insertion Sort
void insertionSort(vector<int> &arr, int &stepCount) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        stepCount++; // Initialization
        while (j >= 0 && arr[j] > key) {
            stepCount++; // Comparison
            arr[j + 1] = arr[j];
            j--;
            stepCount++; // Shift
        }
        arr[j + 1] = key;
        stepCount++; // Assignment
    }
}

// Function to print array
void printArray(const vector<int> &arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> data = {35, 12, 48, 7, 22};
    int stepCount = 0;
    
    cout << "Original Array: ";
    printArray(data);

    // Bubble Sort
    vector<int> bubbleData = data;
    bubbleSort(bubbleData, stepCount);
    cout << "Bubble Sorted: ";
    printArray(bubbleData);
    cout << "Step Count: " << stepCount << endl;

    // Selection Sort
    stepCount = 0;
    vector<int> selectionData = data;
    selectionSort(selectionData, stepCount);
    cout << "Selection Sorted: ";
    printArray(selectionData);
    cout << "Step Count: " << stepCount << endl;

    // Insertion Sort
    stepCount = 0;
    vector<int> insertionData = data;
    insertionSort(insertionData, stepCount);
    cout << "Insertion Sorted: ";
    printArray(insertionData);
    cout << "Step Count: " << stepCount << endl;

    return 0;
}
