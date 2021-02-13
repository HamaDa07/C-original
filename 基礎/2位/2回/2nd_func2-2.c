#include<stdio.h>

int a; /*グローバル変数の宣言*/

int sub(void)
{
	int i;
	i=a=2; 
	
	printf("sub :a=%d i=%d\n",a,i);
}

int main(void)
{
	int i;
	i=a=1;
	
	printf("main :a=%d i=%d\n",a,i); /*１番目に実行  (1,1)*/
	sub();					/*2番目に実行(2,2)*/
	printf("main :a=%d i=%d\n",a,i); /*3番目に実行   (2,1)
								i=a(2)=1
								i=1*/
}