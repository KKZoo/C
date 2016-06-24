#include<stdio.h>

/* floatの計算の仕方の基本文 */

  float getMax(float a, float b){
    if(a >= b){
      return a;
    }else{
      return b;
    }
  }

void sayHi(void){
  printf("Hi!");
}

int main(void){

  float result;
  result =getMax(2.3, 5.2);
  printf("%f\n",result);

  sayHi();
  return 0;
}
