#include<stdio.h>
int global;
static fail_static;/*�\�[�X�t�@�C�����ŗL���ȃX�^�b�N�ϐ�*/

int func(void)
{
	int func_local;/*�֐��t�@�C�����ŗL���ȃ��[�J���ϐ�*/
	
	static int func_static;/*�֐�func���ŗL���ȃX�^�e�B�b�N�ϐ�*/
}

int main(void)
{
	int main_local;/*�֐�main���ŗL���ȃ��[�J���ϐ�*/
}

extern int global;/*�ʃt�@�C���ł̐錾*/