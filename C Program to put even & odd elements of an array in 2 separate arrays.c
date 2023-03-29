#include <stdio.h>

int main() {
  int arr[100], even[100], odd[100], size, i, j = 0, k = 0;
  printf("Enter size of the array: ");
  scanf("%d", &size);
  printf("Enter elements in the array: ");
  for(i=0; i<size; i++) {
    scanf("%d", &arr[i]);
  }
  for(i=0; i<size; i++) {
    if(arr[i] % 2 == 0) {

      even[j] = arr[i];
      j++;
    }
    else {

      odd[k] = arr[i];
      k++;
    }
  }
  printf("Even elements of the array: ");
  for(i=0; i<j; i++) {
    printf("%d ", even[i]);
  }
  printf("\n");
  printf("Odd elements of the array: ");
  for(i=0; i<k; i++) {
    printf("%d ", odd[i]);
  }
  return 0;
}
