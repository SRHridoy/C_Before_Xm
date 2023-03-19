#include<stdio.h>
#include<math.h>
int main(){
  // int arr[3] = {1,4,5};
  // //printf("%d",arr[5]);
  // char ch = 'a';
  // int arr_c[ch];
  // for(int i = 0; i < 'a'; i++){
  //   arr_c[i] = i+1;
  // }
  // for(int i = 0; i < 'a'; i++){
  //   printf("%d\n",arr_c[i]);
  // }
  int x = 3, y = 2, z = 156;
  int exp = z/(x+(int)(pow((x+2),3)))%y++;
  printf("%d\n",exp);
  int exp1 = y*--exp;
  printf("%d\n",exp1);
}