//条件运算符
#include <stdio.h>
int main(void)
{
	int x,y;
	scanf("%d",&y);
	x = (y < 0) ? -y : y;
	printf("%d",x);

}
