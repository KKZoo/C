#include<stdio.h>

int main(void){

int a , b , c , d = 1;

printf("数字は?");
scanf("%d",&c);

printf("何乗まで計算しますか?");
scanf("%d",&b);

printf("%dの0乗 => 1\n",c);
for( a = 1; a <= b; a++){	
	d = c*d;
		printf("%dの%d乗 => %d\n",c,a,d);
	}
	
return 0;
}