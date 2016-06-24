#include<stdio.h>

int main(void){

  int i,j,k,hensuu[101];
  for(i=0;i<100;i++){
    j=i;
    hensuu[i]=j;
    printf("i = %d,j = %d\n",i,j);
  }

  printf("hensuu[50] = %d",hensuu[50]);
  return 0;
}
