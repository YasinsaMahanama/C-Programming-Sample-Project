#include <stdio.h>
#include <conio.h>

void bubbleSort(int array[], int n);

int main() {
    int array[] = {6, 5, 2, 7, 4, 1};
    int n = 6;
    int i;

    printf("Before sorting\n\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    bubbleSort(array, n);

    printf("\n\nAfter sorting\n\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    getch();
    return 0;
}

void bubbleSort(int array[], int n) {
    if (n <= 1) {
        return; // Base case: if the array has 0 or 1 elements, it's already sorted
    }

    int i, temp;
    for (i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            // Swap adjacent elements if they are in the wrong order
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }

    // Recursively sort the remaining elements
    bubbleSort(array, n - 1);
}

