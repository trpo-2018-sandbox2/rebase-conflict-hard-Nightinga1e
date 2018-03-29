#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int *arr, int size)
{
    int min = *arr;

    int *it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

void print_array(int *arr, int size)
{
  //<<<<<<< HEAD
  // int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    /*<<<<<<< HEAD
    const int min = min_element(arr, 10);

    printf("Array: ");
    int i;
    for (i = 0; i < 10; ++i) {
    =======*/
  /* const int min = min_element(arr, N_ELEMENTS(arr));

    printf("Array: ");
    int i;
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
      //>>>>>>> Count array items with macro
=======*/
    printf("Array: ");
    int i;
    for (i = 0; i < size; ++i) {
      //>>>>>>> Extract printing array to function
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
    printf("Min element: %d\n", min);

    return 0;
}
