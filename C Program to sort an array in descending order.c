#include <stdio.h>
int main() {
  int arr[100], size, i, j, temp;
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements in the array: ");
  for(i=0; i<size; i++) {
    scanf("%d", &arr[i]);
  }
  for(i=0; i<size-1; i++) {
    for(j=i+1; j<size; j++) {
      if(arr[i] < arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Array sorted in descending order: ");
  for(i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
