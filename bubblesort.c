#include <stdio.h>
#define max 1000
int bubsort(int in[]);
void main()
{
	int in[max];
	printf("Input:\n");
	for (int i = 0; i < 10; ++i)
	{
		scanf(" %d",&in[i]);
	}
	bubsort(in);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\t",in[i]);
	}
}
int bubsort(int in[])
{
	int temp;
	for (int i = 1; i < 10; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(in[i]<in[j])
			{
				temp=in[i];
				in[i]=in[j];
				in[j]=temp;
			}
		}
	}
}