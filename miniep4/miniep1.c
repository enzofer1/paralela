#include <stdio.h>
#include <stdlib.h>

int main()
{
	long n = 10*10*10*10*10*10*10;
	int acertos = 0;
	int i = 0;
	for(i=0;i<n;i++)
	{
		float x = (float)rand()/RAND_MAX;
		float y = (float)rand()/RAND_MAX;
		if((x*x) + (y*y) <= 1.0)
		{
			acertos = acertos+1;
		}
	}
	printf("%f",(float)(4 * acertos) / n);
	return 0;
}
