#include<stdio.h>
int main(){
  char *p;
  char s[] = "Welcome";
  p = s;
  p+=3;
  printf("%s",p);//Prints: come
}