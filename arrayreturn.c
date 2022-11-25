/* no such thing as returning an array*/
#include <stdio.h>
int arrayr(int ar[]);
int main()
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i]=i;
	}
	arrayr(a);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",a[i]);
	}
}
int arrayr(int ar[])
{
	for (int i = 0; i < 10; ++i)
	{
		ar[i]=ar[i]*10;
	}
	return 0;
}
