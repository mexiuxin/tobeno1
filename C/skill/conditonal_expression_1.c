//条件运算符
#include <stdio.h>
int main(void)
{
	int x,y;
	scanf("%d",&y);
	if(y<0)
		x=-y;
	else
		x=y;
	printf("%d",x);

}
