#include<stdio.h>

void f(long a){
  a += 100;
  printf("%ld\n",a);
}

int main(void){

  long a = 1000;
  f(a);

  return 0;
}
