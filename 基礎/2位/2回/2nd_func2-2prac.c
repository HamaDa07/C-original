#include<stdio.h>
int a;

int sub(void)
{
	int i;
	int a;
	
	i=a=2;
	
	printf("sub	a=%d i=%d\n",a,i);
}
int main(void)
{
	int i;
	
	i=a=1;
	
	printf("main  a=%d i=%d\n",a,i);/*main  a=1 i=1*/
		
	sub();				  /*sub   a=2 i=2*/
	
	printf("main  i=%d i=%d\n",a,i);/*main  a=1 i=1*/
						  /*mainŠÖ”‚ğ‚à‚¤ˆê“x‚·‚éH*/
						/*‚È‚ñ‚Å‚©‚í‚©‚ç‚ñ*/
}
