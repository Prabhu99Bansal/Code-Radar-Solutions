// Your ode here...
#include <stdio.h> 
#include <stdio.h>

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop runs (n-1) times
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++) {  // Inner loop for swapping
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        // If no swapping occurred, array is already sorted
        if (flag == 0) {
            break;
        }
    }
}

// Function to print sorted array
void printSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int n;
    
    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

    // Input elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, n);

    // Print sorted array
    printf("Sorted array: ");
    printSorted(arr, n);

    return 0;
}
