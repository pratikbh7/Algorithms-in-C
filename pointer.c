#include <stdio.h>
int main(void)
{
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int *p;
	p=a;
	int **d=&p;
	printf("Unexpected:\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",d[i]);
	}
	printf("Expected:\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",(*d)[i]);
	}
	printf("Theory:\n");
	for (int i = 0; i < 10; ++i) {
    printf("Reading int (%d bytes) bytes from the start of d: %d\n",
        sizeof(int),
        d[i]
    );
}
}