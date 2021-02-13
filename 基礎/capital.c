#include<stdio.h>
#include<ctype.h>/*•¶šˆ—‚·‚é‚½‚ß‚ÌŠÖ”*/
int main(void)
{
	int ch;
	ch=getchar();
	
	while(ch!=EOF){/*•Ï”ch‚ªI—¹‹L†‚Å‚È‚¢ŠÔŒJ‚è•Ô‚·*/
		
		ch=toupper(ch);
		putchar(ch);
		ch=getchar();
	}
	
	return 0;
}