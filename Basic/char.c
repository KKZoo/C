#include<stdio.h>

/*文字列:charの配列(※終端は\0となる)*/

int main(void){

  char s[] = "abc";

  /*この記述だとbが実行したときに出る*/
  printf("%c\n",s[1]);

  return 0;
}
