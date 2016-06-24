#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//基本情報の過去問の年度をrandamで決めてもらうプログラムである
int main(void){

	int i , j=0 , k;
    
			//16年度から27年度から年度を決めてもらう
			srand((unsigned int)time(NULL));
                i = rand();//printf("%dと%d\n", i,j);	　//動作確認処理
                j = (i%12)+16;//printf("%dと%d\n", i,j);	   //動作確認処理
    
    
			//以下の  if文  は前期か後期かを決めてもらうところの処理である
		if( j > 15){
			i =rand();
				//printf("%d\n",i);   //動作確認処理
			k = i % 2;
				if(k == 0){
					printf("%d年の春期\n", j);
				} else if(k == 1){
					printf("%d年の秋期\n", j);
				}else{
                    printf("error\n");
                }
            }
	
	return 0;
}