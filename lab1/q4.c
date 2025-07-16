#include <stdio.h>

// Find the most repeating element in an array

int main() {
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Correct Bubble Sort (in ascending order)
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { // 🛠️ fixed comparison direction
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    //  Main logic to find most repeated element
    int maxCount = 1;
    int currCount = 1;
    int mostFrequent = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currCount++;
        } else {
            currCount = 1;
        }

        if (currCount > maxCount) {
            maxCount = currCount;
            mostFrequent = arr[i];
        }
    }

    printf("Most frequent element: %d\n", mostFrequent);
    printf("Repeated: %d times\n", maxCount);

    return 0;
}

