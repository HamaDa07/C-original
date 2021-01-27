#include<stdio.h>
#include<stdlib.h> /*abs関数をインクルード*/

int keisan(int a,int b,int c);

int main(void)
{
	int x,y,z;
	int hikisuu;
	
	printf("xの係数を入力\n");
	scanf("%d",&x);
	
	printf("第二項を入力\n");
	scanf("%d",&y);
	
	printf("右辺を入力\n");
	scanf("%d",&z);
	
	printf("%dx+(%d)=%d\n",x,y,z);
	
	hikisuu=keisan(x,y,z);
	
	printf("x=%d",hikisuu);
	return 0;
}

int keisan(int a,int b,int c){

	int ans;
	int mainasu=-1;
	
	ans=((b*mainasu)+c)/a;
	
	return ans;
}
		
	
