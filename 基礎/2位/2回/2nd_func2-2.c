#include<stdio.h>

int a; /*�O���[�o���ϐ��̐錾*/

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
	
	printf("main :a=%d i=%d\n",a,i); /*�P�ԖڂɎ��s  (1,1)*/
	sub();					/*2�ԖڂɎ��s(2,2)*/
	printf("main :a=%d i=%d\n",a,i); /*3�ԖڂɎ��s   (2,1)
								i=a(2)=1
								i=1*/
}