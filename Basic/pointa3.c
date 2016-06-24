#include<stdio.h>

/* ポインタのpirntfの表記方法は %ldになるので注意が必要 */

/* swapの作業をすることで*paの値と*pbの値を入れ替える事ができる */
void swap(int *pa, int *pb){

  int tmp;/* 空き箱であるtmpを作る */
  tmp = *pa; /* tmpの中にpaを格納(一旦収納) */
  *pa = *pb;/* *paに*pbを格納 */
  *pb = tmp;/* *pbにtmpの中にあるデータを格納 */

}
int main(void){

int a = 1000;
 int b = 1;
   swap(&a,&b);
   printf("a:%d b:%d\n", a, b);

  return 0;
}
