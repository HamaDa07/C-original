#include<stdio.h>
int main(void)
{
	int i,sum1=0,sum2=0;
	
	for(i=1;i<100;i++){
	
	if(i%2==0){
		sum1+=i;
	}
	else{
		sum2+=i;
	}
	}
	printf("sum1:%d",sum1);
	printf("sum2:%d",sum2);
}