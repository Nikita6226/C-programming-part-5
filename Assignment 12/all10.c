#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void findMin(int*, int);
void findMax(int*, int);
void searchNumber(int*, int, int);
void sumOfAllNum(int*, int);
void oddEven(int*, int);
void alternate(int*, int);
void prime(int*, int);
void sumInDiffArray(int*, int*, int);
void mergeArray(int*, int*, int*, int);
void reverseArray(int*, int);
void sortArray(int*, int);

// 01. Find min
void findMin(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    int min = tempArr[0];
    for (int i = 1; i < size; i++) {
        if (tempArr[i] < min)
            min = tempArr[i];
    }
    printf("Min: %d\n", min);
    free(tempArr);  // Free allocated memory
}

// 02. Find max
void findMax(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    int max = tempArr[0];
    for (int i = 1; i < size; i++) {
        if (tempArr[i] > max)
            max = tempArr[i];
    }
    printf("Max: %d\n", max);
    free(tempArr);  // Free allocated memory
}

// 03. Search number
void searchNumber(int* arr, int size, int num)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    for (int i = 0; i < size; i++) {
        if (tempArr[i] == num) {
            printf("Number %d found at position %d\n", num, i + 1);
            free(tempArr);  // Free allocated memory
            return;
        }
    }
    printf("Number %d not found\n", num);
    free(tempArr);  // Free allocated memory
}

// 04. Sum of all numbers
void sumOfAllNum(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += tempArr[i];
    }
    printf("Sum: %d\n", sum);
    free(tempArr);  // Free allocated memory
}

// 05. Odd and even numbers
void oddEven(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (tempArr[i] % 2 == 0)
            printf("%d ", tempArr[i]);
    }
    printf("\nOdd numbers: ");
    for (int i = 0; i < size; i++) {
        if (tempArr[i] % 2 != 0)
            printf("%d ", tempArr[i]);
    }
    printf("\n");
    free(tempArr);  // Free allocated memory
}

// 06. Print alternate numbers
void alternate(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    printf("Alternate numbers: ");
    for (int i = 0; i < size; i += 2) {
        printf("%d ", tempArr[i]);
    }
    printf("\n");
    free(tempArr);  // Free allocated memory
}

// 07. Prime numbers in array
void prime(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    printf("Prime numbers: ");
    for (int i = 0; i < size; i++) {
        int isPrime = 1;
        if (tempArr[i] <= 1)
            continue;
        for (int j = 2; j <= tempArr[i] / 2; j++) {
            if (tempArr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", tempArr[i]);
    }
    printf("\n");
    free(tempArr);  // Free allocated memory
}

// 08. Sum of two arrays into a third array
void sumInDiffArray(int* arr1, int* arr2, int size)
{
    int* sum = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    printf("Sum array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    free(sum);  // Free allocated memory
}

// 09. Merge two arrays into a third array
void mergeArray(int* arr1, int* arr2, int* result, int size)
{
    int* tempResult = (int*)malloc(2 * size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempResult[i] = arr1[i];
        tempResult[size + i] = arr2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", tempResult[i]);
    }
    printf("\n");
    free(tempResult);  // Free allocated memory
}

// 10. Reverse the array
void reverseArray(int* arr, int size)
{
    int* rev = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - i - 1];
    }
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");
    free(rev);  // Free allocated memory
}

// 11. Sort the array
void sortArray(int* arr, int size)
{
    int* tempArr = (int*)malloc(size * sizeof(int));  // Allocate memory
    for (int i = 0; i < size; i++) {
        tempArr[i] = arr[i];  // Copy elements
    }

    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (tempArr[i] > tempArr[j]) {
                temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tempArr[i]);
    }
    printf("\n");
    free(tempArr);  // Free allocated memory
}

// main function
int main()
{
    int size = 5;
    int* arr1 = (int*)malloc(size * sizeof(int));
    int* arr2 = (int*)malloc(size * sizeof(int));
    int* result = (int*)malloc(2 * size * sizeof(int));
    int choice, num;

    // Input for arr1
    for (int i = 0; i < size; i++) {
        printf("Enter the values for array1: ");
        scanf("%d", &arr1[i]);
    }

    do {
        printf("\n1. Min\n2. Max\n3. Search number\n4. Sum of all numbers\n5. Odd even\n6. Alternate\n7. Prime\n8. Sum of two arrays\n9. Merge arrays\n10. Reverse array\n11. Sort array\n0. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        if (choice == 8 || choice == 9) {
            for (int i = 0; i < size; i++) {
                printf("Enter the values for array2: ");
                scanf("%d", &arr2[i]);
            }
        }

        switch (choice) {
            case 1:
                findMin(arr1, size);
                break;
            case 2:
                findMax(arr1, size);
                break;
            case 3:
                printf("Enter the number to search: ");
                scanf("%d", &num);
                searchNumber(arr1, size, num);
                break;
            case 4:
                sumOfAllNum(arr1, size);
                break;
            case 5:
                oddEven(arr1, size);
                break;
            case 6:
                alternate(arr1, size);
                break;
            case 7:
                prime(arr1, size);
                break;
            case 8:
                sumInDiffArray(arr1, arr2, size);
                break;
            case 9:
                mergeArray(arr1, arr2, result, size);
                break;
            case 10:
                reverseArray(arr1, size);
                break;
            case 11:
                sortArray(arr1, size);
                break;
            default:
                break;
        }
    } while (choice != 0);

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}
