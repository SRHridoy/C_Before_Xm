#include<stdio.h>
int main(){
  int i = 10;
  int *p = &i;
  printf("The address of variable i is %p\n",p);
  printf("The address of variable i is %u\n",&i);
  printf("The address of variable i is %u\n",p);
  p
}