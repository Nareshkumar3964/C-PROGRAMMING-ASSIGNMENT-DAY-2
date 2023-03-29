#include <stdio.h>

int main() {
  int arr[100], size, i, max;

  // Input size of the array
  printf("Enter size of the array: ");
  scanf("%d", &size);

  // Input elements in the array
  printf("Enter elements in the array: ");
  for(i=0; i<size; i++) {
    scanf("%d", &arr[i]);
  }

  // Assume first element as maximum
  max = arr[0];

  // Find maximum element in the array
  for(i=1; i<size; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }

  // Print the maximum element
  printf("Largest element in the array is: %d", max);

  return 0;
}
