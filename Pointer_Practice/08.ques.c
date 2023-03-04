#include<stdio.h>
int main(){
  char c[] = "GATE2011";
  char *p = c;
  printf("%s",p+p[3]-p[1]);

  //Work like this:
  ///printf("%s",p+69-65);
  //p[3]--->'E'= 69
  //p[1]--->'A'=65
  //4
  //p+4 = 2
  //then %s -->2 to last ...so 2011...
}