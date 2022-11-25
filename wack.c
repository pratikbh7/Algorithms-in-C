#include <stdio.h>
int main()
{	printf("Celsius\t\tFahrenheit:\n");
	for (float i = 300; i >= 0; i-=10)
	{
		printf("%3.1f\t\t%.1f\n",(5*(i-32))/9,i);
	}
	return 0;
}
