#include<stdio.h>
int main(){
  int a[10];
  int *i = &a[2];
  int *j = &a[5];
  int diff = j-i;
  printf("%d",diff);//Prints--->3
}