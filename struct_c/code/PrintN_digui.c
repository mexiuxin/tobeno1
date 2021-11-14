#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
clock_t start,stop;
int PrintN_for(int N);
int main(void)
{
	double duration;
	start=clock();
	int N;
	scanf("%d",&N);
	PrintN_for(N);
	stop=clock();
	duration=((double)(stop-start))/CLOCKS_PER_SEC;
	printf("%f",duration);
	return 0;
}
int PrintN_for(int N)
{
	if(N)
	{
		PrintN_for(N-1);
		printf("%d\n",N);
	}
	return 0;
}
