#include<stdio.h>
int main(){
  int arr[3] = {1,4,5};
  //printf("%d",arr[5]);
  char ch = 'a';
  int arr_c[ch];
  for(int i = 0; i < 'a'; i++){
    arr_c[i] = i+1;
  }
  for(int i = 0; i < 'a'; i++){
    printf("%d\n",arr_c[i]);
  }
  
  
}