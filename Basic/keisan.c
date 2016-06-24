#include<stdio.h>

int main(void){

  int x = 10;
  int y = 50;
  int z = x+y;
  z += 3;
  z++;

  printf("x+y=%d\n",x+y);
  printf("z =%d\n",z);
  printf("z++ = %d",z++); 
 return 0;
}
