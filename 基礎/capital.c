#include<stdio.h>
#include<ctype.h>/*�����������邽�߂̊֐�*/
int main(void)
{
	int ch;
	ch=getchar();
	
	while(ch!=EOF){/*�ϐ�ch���I���L���łȂ��ԌJ��Ԃ�*/
		
		ch=toupper(ch);
		putchar(ch);
		ch=getchar();
	}
	
	return 0;
}