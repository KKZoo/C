#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
じゃんけんゲーム 
0はグー, 1はチョキ, 2はパーである
int型のaはプレイヤーの入力した値をいれている
int型のbはコンピュータの出した値をいれている
 **/

int b;

void CPU(void);

void CPU(void){
  if(b%3 == 0){
    printf("CPUはグー\n");
  }else if(b%3 == 1){
    printf("CPUはチョキ\n");
  }else if(b%3 == 2){
    printf("CPUはパー\n");
  }
}

int main(void){

  int a,i,j;

  //  試合回数をきめる処理のプログラム 
   
  printf("何回試合をしますか？\n");
    scanf("%d",&j);
    printf("%d回ですね♪\n対戦よろしくお願いします!!(^^)/\n ",j);
    printf("\n");

  for(i = 0; i < j; i++){
 
    //コンピュータのじゃんけんで出すやつを決める処理
    srand((unsigned int)time(NULL));
    b = rand();

  //プレイヤーのじゃんけんで出すやつを読み込む処理
  printf("グー=0,チョキ=1,パー=2の内どれかを入力して下さい <(_ _)>\n");
  scanf("%d",&a);

  switch(a){
    //プレイヤーがグー(0)を出したときの処理
  case 0:

    CPU();

  if(b%3 == 0){
    printf("引き分けです (^^;; \n");
  }else if(b%3 == 2){
    printf("残念!!\n君の負けだね (-_-)\n");
  }else if(b%3 == 1){
    printf("ヤッタね!!\n君の勝ちだよ (^^)/ \n");
  }
  printf("\n");
  break;


  //プレイヤーがチョキ(1)を出したときの処理
  case 1:

    CPU();

    if(b%3 == 1){
      printf("引き分けです (^^;; \n");
    }else if(b%3 == 0){
      printf("残念!!\n君の負けだね (-_-)\n");
    }else if(b%3 == 2){
      printf("ヤッタね!!\n君の勝ちだよ (^^)/ \n");
    }
    printf("\n");
    break;

    //プレイヤーがパー(2)を出したときの処理
  case 2:

    CPU();

  if(b%3 == 2){
    printf("引き分けです (^^;; \n");
  }else if(b%3 == 1){
    printf("残念!!\n君の負けだね (-_-) \n");
  }else if(b%3 == 0){
    printf("ヤッタね!!\n君の勝ちだよ (^^)/ \n");
  }
  printf("\n");
  break;

  //プレイヤーがルール違反(0,1,2以外を押した)の処理
  default:
    printf("ルール違反!!\n あなたの負けです!!\n");
    printf("\n");
    break;
  }

 }
  return 0;
}
