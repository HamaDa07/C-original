#include<stdio.h>
void f1(void);/*スタックっていうやつ*/

int max;

int main(void)
{
	max=10;
	f1();
	return 0;
}

void f1(void)
{
	int i;
	for(i=0;i<max;i++){
		printf("%d",i);
	}
	
}
	