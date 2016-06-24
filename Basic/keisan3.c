#include<stdio.h>

/* floatの計算の仕方の基本文 */

  float getMax(float a, float b){
    /*    if(a >= b){
      return a;
    }else{
      return b;
    } 
このif文と下の return(条件)? a:b;　は同等の計算式になる
*/
    return(a >= b)? a : b; 

 }

int main(void){

  float result;
  result =getMax(2.3, 5.2);
  printf("%f\n",result);

  return 0;
}
