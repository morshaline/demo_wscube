#include <stdio.h>

// Merge two subarrays L and M into arr
void merge(int arr[], int x, int y, int z) {
  int a = y - x + 1;
  int b = z - y;

  int L[a], M[b];

  for (int c = 0; c < a; c++)
    L[c] = arr[x + c];
  for (int d = 0; d < b; d++)
    M[d] = arr[y + 1 + d];

  int c = 0, d = 0, e = x;

  while (c < a && d < b) {
    if (L[c] <= M[d]) {
      arr[e] = L[c];
      c++;
    } else {
      arr[e] = M[d];
      c++;
    }
    e++;
  }

while (c< a) {
    arr[e] = L[c];
    c++;
    e++;
  }

  while (d< b) {
    arr[e] = M[d];
    d++;
    e++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l_, int r_) {
  if (l_ < r_) {
    int m = l_ + (r_ - l_) / 2;

    mergeSort(arr, l_, m);
    mergeSort(arr, m + 1, r_);

    merge(arr, l_, m, r_);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int c = 0; c < size; c++)
    printf("%d ", arr[c]);
  printf("\n");
}

// Driver program
int main() {
  int size;
  printf("Input the size of array:\n");
  scanf("%d", &size);

  int arr[size];
  printf("Input %d elements:\n", size);
  for (int c = 0; c < size; c++) {
    scanf("%d", &arr[c]); // Corrected this line
  }

  mergeSort(arr, 0, size - 1);

  printf("Sorted array:\n");
  printArray(arr, size);

  return 0;
}
