#include <stdio.h>

int main() {
  int arr[100], size, i, max_diff;


  printf("Enter size of the array: ");
  scanf("%d", &size);


  printf("Enter elements in the array: ");
  for(i=0; i<size; i++) {
    scanf("%d", &arr[i]);
  }


  int max = arr[0], min = arr[0];


  for(i=1; i<size; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
    if(arr[i] < min) {
      min = arr[i];
    }
  }


  max_diff = max - min;


  printf("Maximum difference between two elements in the array is: %d", max_diff);

  return 0;
}
