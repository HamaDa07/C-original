#include<stdio.h>
int g,h;

int main(void)
{
	int i,j;
	
	printf("&i=%p\n",&i);/*���[�J���ϐ��̃A�h���X*/
	printf("&j=%p\n",&j);
	
	/*&i=0019FF38	&j=0019FF34*/
	
	printf("&g=%p\n",&g);/*�O���[�o���ϐ��̃A�h���X*/
	printf("&h=%p\n",&h);
	
	/*&g=0040C470	&h=0040C474*/
	
	return 0;
}