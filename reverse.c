#include <stdio.h>
#define max 1000
int getline(char in[],int count);
void reverse(char in[]);
int main()
{
	printf("Input:");
	char in[max];
	while(getline(in,max)>0)
	{
		reverse(in);
		printf("%s\n",in);
	}
	return 0;
}
int getline(char in[],int count)
{
	int c,i;
	i=0;
	for (i;i<(count-1) && (c=getchar())!=EOF && c!='\n'; ++i)
	{
		in[i]=c;
	}
	if(c=='\n')
	{
		in[i]=c;
		++i;
	}
	in[i]='\0';
	return  i;	
}
void reverse(char in[])
{
	int temp,j,i;
	i=j=0;
	for (i; in[i]!='\n'; ++i);
	--i;
	while(i>j)
	{
		temp=in[i];
		in[i]=in[j];
		in[j]=temp;
		--i;
		++j;
	}
}