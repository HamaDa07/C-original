#include<stdio.h>
int global;
static fail_static;/*ソースファイル内で有効なスタック変数*/

int func(void)
{
	int func_local;/*関数ファイル内で有効なローカル変数*/
	
	static int func_static;/*関数func内で有効なスタティック変数*/
}

int main(void)
{
	int main_local;/*関数main内で有効なローカル変数*/
}

extern int global;/*別ファイルでの宣言*/