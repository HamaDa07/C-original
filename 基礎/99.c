#include<stdio.h>
int main(void)
{
	int i,j,sum=1;
	
	for(i=1;i<9+1;i++){
		
		for(j=1;j<9+1;j++){
		
		sum=i*j;
		printf("%d*%d=%d\t",i,j,sum);
				}
		
		printf("\n");
	}
	
}