// C code to implement quicksort

#include <stdio.h>

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high) {
  // Choosing the pivot
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }
  }
  int temp = arr[high];
  arr[high] = arr[i + 1];
  arr[i + 1] = temp;
  return (i + 1);
}
void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
  }
}

int main() {
  int arr[100];
  int count;
  printf("\nEnter the size of the array: ");
  scanf("%d", &count);
  for (int i = 0; i < count; i++) {
    scanf("%d", &arr[i]);
  }

  quickSort(arr, 0, count - 1);
  printf("Sorted array: \n");
  for (int i = 0; i < count; i++)
    printf("%d ", arr[i]);
  return 0;
}
