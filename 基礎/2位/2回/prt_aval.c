#include<stdio.h>

int main(void)
{	
	int i,j;
	
	printf("&i=%p\n",&i);/*&i=0019FF38*/
	printf("&j=%p\n",&j);/*&j=0019FF34*/
			/*int型のデータは４バイト*/
	
	return 0;
}

/*int main(void)
{
	int i;
	
	printf("&i=%p\n",&i);
	
	return 0;
}*/
