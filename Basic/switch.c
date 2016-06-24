#include<stdio.h>

/*　条件分岐のswitch文　*/

int main(void){

  int rank , a;

  printf("順位を入力して下さい <(_ _)> \n");
  scanf("%d",&rank);
  printf("\n");
    scanf("%d",&a);

  switch(a){
  case 1:
    printf("Gold medal\n");
    break;
  case 2:
    printf("Silver medal\n");
    break;
  case 3:
    printf("Blonze medal\n");
    break;
  default:
    printf("no medal\n");
    break;
  }

  return 0;
}
