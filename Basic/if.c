#include<stdio.h>

int main(void){

  int score ;
  printf("数字を入力して下さい");
  scanf("%d",&score);

  if(score < 60){
    printf("NG!\n");
  }else if(score == 60){
    printf("So So...\n");
  }else if (score > 60){
      printf("good score\n");
}

  return 0;

}
