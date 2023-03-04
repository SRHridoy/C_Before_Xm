#include<stdio.h>
int main(){
  char *s1="abcd";
  char s2[] = "abcd";
  printf("%ld",sizeof(s1));//prints -----> 4 or 8 depends on computer architecture
  printf("%ld",sizeof(s2));//prints ----> 5
}