#include<stdio.h>

/* ポインタのpirntfの表記方法は %ldになるので注意が必要 */

void f(long *pa){
  *pa += 100;
  printf("%ld\n",*pa);
}

int main(void){

  long a = 1000;
  f(&a);

  return 0;
}
