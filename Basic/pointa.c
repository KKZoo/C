#include<stdio.h>
/*

 *: ポインタを使うときの演算子

& : アドレス演算子

*/

int main(void){

  int a;
  a = 10;

  int *pa;
  pa = &a;

  printf("%d\n",*pa);

  return 0;
}
