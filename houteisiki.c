#include<stdio.h>
#include<stdlib.h> /*abs�֐����C���N���[�h*/

int keisan(int a,int b,int c);

int main(void)
{
	int x,y,z;
	int hikisuu;
	
	printf("x�̌W�������\n");
	scanf("%d",&x);
	
	printf("��񍀂����\n");
	scanf("%d",&y);
	
	printf("�E�ӂ����\n");
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
		
	