//Right roatation of array 

#include <stdio.h>

void EXCHANGE(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void ROTATE_RIGHT(int arr[], int p2) {
    for (int i = p2 - 1; i > 0; i--) {
        EXCHANGE(arr, i, i - 1);
    }
}

int main() {
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int p2;
    printf("Enter number of elements to rotate: ");
    scanf("%d", &p2);

    if (p2 > n || p2 < 1) {
        printf("Invalid number of elements to rotate.\n");
        return 1;
    }

    printf("Before ROTATE: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    ROTATE_RIGHT(arr, p2);

    printf("\nAfter  ROTATE: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

