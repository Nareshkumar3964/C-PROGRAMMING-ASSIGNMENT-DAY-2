#include <stdio.h>

int main() {
  int arr[100], size, i, temp;
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements in the array: ");
  for(i=0; i<size; i++) {
    scanf("%d", &arr[i]);
  }

  for(i=0; i<size/2; i++) {
    temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = temp;
  }
  printf("Reversed array: ");
  for(i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
