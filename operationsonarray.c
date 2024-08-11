#include <stdio.h>

void delete(int array[], int *n);
void search(int array[], int n);

int main() {
    int n, i, ch;
    printf("Enter the number of elements required inside the array: "); // array size
    scanf("%d", &n);
    int array[n];

    // Accepting array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Display the inserted elements
    printf("The entered elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    printf("Enter the operation to be performed:\n 1: Deletion\n 2: Searching\n");
    scanf("%d", &ch);

    if (ch == 1) {
        delete(array, &n);
    } else if (ch == 2) {
        search(array, n);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

// Delete function
void delete(int array[], int *n) {
    int d;
    printf("Enter the array index to be deleted: ");
    scanf("%d", &d);

    if (d < 0 || d >= *n) {
        printf("Invalid index. No deletion performed.\n");
        return;
    }

    int i;
    for (i = d; i < *n - 1; i++) {
        array[i] = array[i + 1];
    }
    (*n)--; // Decrease the size of the array

    // Display the updated array
    printf("Array after the deletion is:\n");
    for (i = 0; i < *n; i++) {
        printf("%d\n", array[i]);
    }
}

// Search function
void search(int array[], int n) {
    int s;
    printf("Enter the element to be searched:\n");
    scanf("%d", &s);

    int i;
    for (i = 0; i < n; i++) {
        if (array[i] == s) {
            printf("The element is at index: %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

