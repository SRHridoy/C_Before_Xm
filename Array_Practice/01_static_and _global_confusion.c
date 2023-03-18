#include <stdio.h>
int main() {
  static int arr[5];
  printf("%d\n", arr[0]);
  printf("%d\n", arr[1]);
  printf("%d\n", arr[2]);
  printf("%d\n", arr[3]);
  printf("%d\n", arr[4]);
}