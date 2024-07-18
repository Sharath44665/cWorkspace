#include <iostream>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap elements without using std::swap
        if (i != minIndex) {
            int temp = arr[i];
            arr[i] = arr[minIndex];     
            arr[minIndex] = temp;
        }

        for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
    	}
    	std::cout << std::endl;


    }
}

int main() {
    int arr[] = {                   };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
