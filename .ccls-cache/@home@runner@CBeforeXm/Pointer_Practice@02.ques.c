#include<stdio.h>
#include<string.h>
int main(){
  char p[20];
  char *s = "String";
  int length = strlen(s);
  for(int i = 0; i <= length; i++){
    p[i] = s[length-i];
  }
  //EKhane kisui print hobe nah karon p te store hobe ([\0|g|n|i|r|t|s]) NULL diye. Ar NULL holo terminating character...
  printf("%s",p); 

  //VERIFYING--->
  // for(int i = 0; i<=length;i++){
  //   printf("%c",p[i]);
  // }
}