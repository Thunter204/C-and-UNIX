#include <stdio.h>

long addNumbers(long numList[], int size) {
    long sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numList[i];
    }
    return sum;
}

void sort(int n[], int size, int (*f)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (f(n[j], n[j + 1]) > 0) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
    }
    }
}
}

int compareInts(int a, int b) {
    return a - b;
}

int main() {
    long numList[] = {1, 2, 3, 4, 5};
    int size = sizeof(numList) / sizeof(long);
    printf("Sum of numbers: %ld\n", addNumbers(numList, size));

    int numbers[] = {5, 4, 3, 2, 1};
    size = sizeof(numbers) / sizeof(int);
    sort(numbers, size, compareInts);
    printf("Sorted numbers: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}