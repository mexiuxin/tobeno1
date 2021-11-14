#include <stdio.h>
int PrintN_for(int N);
int main(void)
{
	int N;
	scanf("%d",&N);
	PrintN_for(N);
	return 0;
}
int PrintN_for(int N)
{
	for(int i=1;i<=N;i++)
	{
		printf("%d\n",i);
	}
}
