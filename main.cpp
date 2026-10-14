#include <iostream>

using namespace std;

void display(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}

void insertionSort(int A[], int size) {
    for (int i = 1; i < size; i++) {
        int key = A[i];
        int j = i;
        
        while (j > 0 && A[j - 1] > key) {
            A[j] = A[j - 1];
            j--;
        }
        A[j] = key;
    }
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;
    
    int A[size];
    for (int i = 0; i < size; i++) {
        cout << "enter the number of index " << i << " ";
        cin >> A[i];
    }
    
    cout << "Array before sorting: ";
    display(A, size);
    
    insertionSort(A, size);
    
    cout << "\nArray after sorting: ";
    display(A, size);
    
    return 0;
}